#include<iostream>
#define Maxlen 100
using namespace std;

class Node
{
public:
    int data;
    Node *rchild;
    Node *lchild;
}*root=NULL;

class stack
{
public:
    int element[Maxlen];
    int top;
};

stack init()
{
    stack S;
    S.top=-1;
    return S;
}

bool isEmpty(stack S)
{
    if(S.top==-1)
        return true;
    else
        return false;
}

bool isFull(stack S)
{
    if(S.top==Maxlen-1)
        return true;
    else
        return false;
}

int top(stack S)
{
    if(isEmpty(S))
        return NULL;
    else
        return S.element[S.top];
}

stack push(stack S,int num)
{
    if(isFull(S))
        cout<<"Stack is full"<<endl;
    else
    {
        ++S.top;
        S.element[S.top]=num;
    }
    return S;
}

stack pop(stack S)
{
    if(isEmpty(S))
        cout<<"Stack is Empty"<<endl;
    else
    {
        --S.top;
    }
    return S;
}
void createPre(int pre[],int n)
{
    stack stk;
    Node *t;
    int i;
    
    Node* root= new Node;
    root->data=pre[i]++;
    root->rchild=root->lchild=NULL;
    Node *p=root;
    
    while(i<n)
    {
        if(pre[i]<p->data)
        {
            Node *t;
            t->data=pre[i++];
            t->rchild=t->lchild=NULL;
            p->lchild=t;
            push(stk,p);
            p=t;
        }
        else
        {
            if(pre[i]>p->data && pre[i]<top(stk)->data)
            {
                Node *t;
                t->data=pre[i++];
                t->rchild=t->lchild=NULL;
                p->rchild=t;
                p=t;
            }
            else
                pop(stk);
        }
    }
    
}
