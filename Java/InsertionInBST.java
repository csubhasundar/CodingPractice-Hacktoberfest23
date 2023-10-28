// A class to store a BST node
class Node
{
    int data;
    Node left, right;
 
    // Function to create a new binary tree node having a given key
    Node(int key)
    {
        data = key;
        left = right = null;
    }
}
 
class Main
{
    // Function to perform inorder traversal on the tree
    public static void inorder(Node root)
    {
        if (root == null) {
            return;
        }
 
        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
    }
 
    // Recursive function to insert a key into a BST
    public static Node insert(Node root, int key)
    {
        // if the root is null, create a new node and return it
        if (root == null) {
            return new Node(key);
        }
 
        // if the given key is less than the root node,
        // recur for the left subtree
        if (key < root.data) {
            root.left = insert(root.left, key);
        }
 
        // otherwise, recur for the right subtree
        else {
            // key >= root.data
            root.right = insert(root.right, key);
        }
 
        return root;
    }
 
    // Function to construct a BST from given keys
    public static Node constructBST(int[] keys)
    {
        Node root = null;
        for (int key: keys) {
            root = insert(root, key);
        }
        return root;
    }
 
    public static void main(String[] args)
    {
        int[] keys = { 15, 10, 20, 8, 12, 16, 25 };
 
        Node root = constructBST(keys);
        inorder(root);
    }
}
