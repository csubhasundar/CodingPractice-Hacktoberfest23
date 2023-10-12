#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *insert()
{
    int n;
    cin >> n;
    Node *p, *head;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Node *temp = new Node(x);

        if (i == 0)
        {
            head = temp;
            p = head;
        }
        else
        {
            temp->prev = p;
            p->next = temp;
            p = p->next;
        }
    }
    return head;
}

Node *insertfront(Node *head)
{
    int data;
    cin >> data;
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}

Node *insertEnd(Node *head)
{
    int data;
    cin >> data;
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
    }
    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
    temp->prev = p;
    return head;
}

Node *reverse(Node *head)
{
    Node *temp = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    if (temp != NULL)
        head = temp->prev;
    return head;
}

Node *deleteFirst(Node *head)
{
    Node *p = head;
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    head = p->next;
    delete p;
    head->prev = NULL;
    return head;
}

Node *deleteEnd(Node *head)
{
    Node *p;
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->prev->next = NULL;
    delete p;
    return head;
}

void printList(Node *head)
{
    Node *p = head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    Node *head = insert();
    printList(head);
    cout << endl;
    head = insertfront(head);
    printList(head);
    cout << endl;
    head = insertEnd(head);
    printList(head);
    cout << endl;
    head = reverse(head);
    printList(head);
    cout << endl;
    head = deleteFirst(head);
    printList(head);
    cout << endl;
    head = deleteEnd(head);
    printList(head);
    return 0;
}