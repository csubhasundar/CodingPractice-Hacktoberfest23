#include <iostream>
#include <queue>
#include <map>
#include <vector>
using namespace std;

//----------------------------------------------------------------
class Node
{
public:
    int data;
    int hd; // to calculate the horizontal distance for Top View
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
        hd = -1;
    }
};

// ----------------------------------------------------------------
// to calculate the diameter of tree in O(n) time complexity
// ----------------------------------------------------------------
class info
{
public:
    int diameter;
    int height;
    info(int d, int h)
    {
        diameter = d;
        height = h;
    }
};

// ----------------------------------------------------------------
class Tree
{

public:
    int idx = -1;
    Node *buildTree(int nodes[])
    {
        idx++;
        if (nodes[idx] == -1)
        {
            return NULL;
        }
        Node *root = new Node(nodes[idx]);
        root->left = buildTree(nodes);
        root->right = buildTree(nodes);
        return root;
    }
    void PrintPreOrder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        PrintPreOrder(root->left);
        PrintPreOrder(root->right);
    }
    void printInOrder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        printInOrder(root->left);
        cout << root->data << " ";
        printInOrder(root->right);
    }
    void PrintPostOrder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        PrintPostOrder(root->left);
        PrintPostOrder(root->right);
        cout << root->data << " ";
    }
    void PrintLevelOrder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            Node *curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }

    int Height(Node *root)
    {
        if (root == NULL)
            return 0;

        int leftHeight = Height(root->left);
        int rightHeight = Height(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
    int NoOfNodes(Node *root)
    {
        if (root == NULL)
            return 0;
        int leftCount = NoOfNodes(root->left);
        int rightCount = NoOfNodes(root->right);
        return leftCount + rightCount + 1;
    }

    info diameter(Node *root)
    {
        if (root == NULL)
        {
            info base(0, 0);
            return base;
        }
        info left = diameter(root->left);
        info right = diameter(root->right);
        int height = max(left.height, right.height) + 1;
        int op1 = left.height + right.height + 1;
        int op2 = left.diameter;
        int op3 = right.diameter;
        int diameter = max(op1, max(op2, op3));
        info ans(diameter, height);
        return ans;
    }

    void PrintTopViewofTree(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        map<int, int> m;
        queue<Node *> q;
        root->hd = 0;
        q.push(root);
        while (!q.empty())
        {
            Node *curr = q.front();
            q.pop();
            int hd = curr->hd;
            if (m.count(hd) == 0)
            {
                m[hd] = curr->data;
            }
            if (curr->left != NULL)
            {
                curr->left->hd = hd - 1;
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                curr->right->hd = hd + 1;
                q.push(curr->right);
            }
        }
        for (auto it : m)
        {
            cout << it.second << " ";
        }
        cout << endl;
    }

    void PrintBottomViewOfTree(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        map<int, int> m;
        queue<Node *> q;
        root->hd = 0;
        q.push(root);
        while (!q.empty())
        {
            Node *curr = q.front();
            q.pop();
            int hd = curr->hd;
            m[hd] = curr->data;
            if (curr->left != NULL)
            {
                curr->left->hd = hd - 1;
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                curr->right->hd = hd + 1;
                q.push(curr->right);
            }
        }
        for (auto it : m)
        {
            cout << it.second << " ";
        }
        cout << endl;
    }
    void KlevelOfTree(Node *root, int K)
    {
        if (root == NULL)
        {
            return;
        }
        if (K == 0)
        {
            cout << root->data << " ";
            return;
        }
        else
        {
            KlevelOfTree(root->left, K - 1);
            KlevelOfTree(root->right, K - 1);
        }
    }
};
bool findPath(Node *root, std::vector<int> &v, int dat)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == dat)
    {
        v.push_back(root->data);
        return true;
    }
    v.push_back(root->data);
    if (findPath(root->left, v, dat) || findPath(root->right, v, dat))
    {
        return true;
    }
    v.pop_back();
    return false;
}

int lowestCommonAncestor(Node *root1, int from, int to)
{
    if (root1 == NULL)
    {
        return -1;
    }
    std::vector<int> v1;
    std::vector<int> v2;
    bool ans1 = findPath(root1, v1, from);
    bool ans2 = findPath(root1, v2, to);
    if (!ans1 || !ans2)
    {
        return -1;
    }
    size_t i = 0;
    while (i < v1.size() && i < v2.size())
    {
        if (v1[i] != v2[i])
        {
            break;
        }
        i++;
    }
    return v1[i - 1];
}
int transformSumTree(Node *root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int originalValue = root->data;

    int leftSum = transformSumTree(root->left);
    int rightSum = transformSumTree(root->right);

    root->data = leftSum + rightSum;

    return originalValue + leftSum + rightSum;
}

//============================================================================

/*
                                                        tree format
    tree                                                                       2
                                                                              /
                                                                             1
                                                                           /  \
                                                                          2    3
                                                                         / \  / \
                                                                        4   5 6  7
                                                                                  \
                                                                                   9
*/
int main()
{
    int nodes[] = {2, 1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, 9, -1, -1, -1};
    Tree t;
    Node *root = t.buildTree(nodes);

    t.PrintPreOrder(root);
    cout << endl;
    t.printInOrder(root);
    cout << endl;

    t.PrintPostOrder(root);
    cout << endl;

    t.PrintLevelOrder(root);
    cout << endl;

    cout << t.Height(root) << endl;

    cout << t.NoOfNodes(root) << endl;

    info ans = t.diameter(root);
    cout << ans.diameter << endl;
    cout << ans.height << endl;

    t.PrintTopViewofTree(root);

    t.PrintBottomViewOfTree(root);

    t.KlevelOfTree(root, 3);
    cout << endl;
    // int nodes2[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, 9, -1, -1,};
    // Tree t2;
    // Node *root2 = t2.buildTree(nodes2);
    // cout << lowestCommonAncestor(root, 6, 9) << endl;

    transformSumTree(root);
    // t.PrintPreOrder(root);
    t.PrintLevelOrder(root);
    cout << endl;
    return 0;
}