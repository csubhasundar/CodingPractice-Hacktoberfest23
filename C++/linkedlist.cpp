#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class NodeList
{
public:
    Node *head;
    int size;

    NodeList()
    {
        head = nullptr;
        size = 0;
    }

    ~NodeList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            Node *temp1 = temp->next;
            delete temp;
            temp = temp1;
        }
    }

    void insertatstart(int data)
    {
        Node *temp = new Node;
        temp->data = data;
        temp->next = head;
        head = temp;
        size++;
    }

    void insertatend(int data)
    {
        Node *temp = new Node;
        temp->data = data;
        temp->next = nullptr;
        Node *temp1 = head;
        while (temp1->next != nullptr)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        size++;
    }

    int length()
    {
        return size;
    }

    void print()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void printMiddle()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Middle element: " << slow->data << endl;
    }

    void CheckCircularList()
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *slow = head;
        Node *fast = head;

        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                cout << "List is circular." << endl;
                return;
            }
        }
        cout << "List is not circular." << endl;
    }
};

void RemoveCircularList(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }
    Node *slow = head;
    Node *fast = head;
    Node *temp;
    while (fast != nullptr && fast->next != nullptr)
    {
        temp = slow;
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            temp->next = nullptr;
        }
    }
}
Node *ReverseLList(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return nullptr;
    }

    Node *prev = nullptr;
    Node *curr = head;

    while (curr != nullptr)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }

    return prev;
}

int main()
{
    NodeList l1;
    l1.insertatstart(1);
    l1.insertatstart(2);
    l1.insertatstart(3);
    l1.insertatstart(4);
    l1.insertatstart(6);
    l1.insertatstart(5);
    l1.insertatend(99);

    // res = l1.search_val(4);
    // l1.print();
    // printMiddle(l1.head);
    // CheckCircularlists(l1.head);

   
    l1.CheckCircularList();
    l1.insertatstart(12);

    l1.print();
    l1.head = ReverseLList(l1.head);
    l1.print();
    cout << "Length: " << l1.length() << endl;

    return 0;
}
