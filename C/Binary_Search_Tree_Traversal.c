#include <stdio.h>
#include <stdlib.h>


// Defining the structure of the Binary Search Tree Nodes:
struct node
{
    struct node *left_child;
    int data;
    struct node *right_child;
};


// All the neccessary function declaration:
struct node *create_node(int);
void insert_BST(struct node **root, int item);


// Traversing Function Declaration:
void preorder_display(struct node *);
void inorder_display(struct node *);
void postorder_display(struct node *);



int main()
{
    // Initializing the root node as NULL initially.
    struct node *root = NULL;

    // Inserting the nodes to the BST:
    insert_BST(&root, 45);
    insert_BST(&root, 36);
    insert_BST(&root, 76);
    insert_BST(&root, 23);
    insert_BST(&root, 89);
    insert_BST(&root, 115);
    insert_BST(&root, 98);
    insert_BST(&root, 39);
    insert_BST(&root, 41);
    insert_BST(&root, 56);
    insert_BST(&root, 69);
    insert_BST(&root, 48);

    printf("PRE-OREDR TRAVERSAL:  ");
    preorder_display(root);
    printf("\n");

    printf("IN-OREDR TRAVERSAL:   ");
    inorder_display(root);
    printf("\n");

    printf("POST-OREDR TRAVERSAL: ");
    postorder_display(root);
    return 0;
}




// Function for creating the nodes of BST:
struct node *create_node(int item)
{
    // Dynamic declaration of newnode:
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    // Assigning the node value to newnode:
    newnode->data = item;

    // Initializing the left and right child as NULL
    newnode->left_child = NULL;
    newnode->right_child = NULL;
    return newnode;
}




// Function for inserting the node in the BST at its correct position:
void insert_BST(struct node **root, int item)
{
    struct node *current; // Current node being examined
    struct node *parent;  // Parent of the current node

    // If the root node is NULL, then creating the root node:
    if (*root == NULL)
    {
        // Create a new node and set it as the root
        *root = create_node(item);
    }

    // else node is already present in the BST:
    else
    {
        current = *root; // Start with the root node
        parent = NULL;

        // Continue until a proper position for the new node is found
        while (1)
        {
            parent = current; // Update the parent as the current node

            // Check whether the new item should be placed in the left or right subtree
            if (item < current->data)
            {
                // Move to the left child
                current = current->left_child;

                // If the left child is NULL, insert the new node here and return
                if (current == NULL)
                {
                    // Create a new node and set it as the left child
                    parent->left_child = create_node(item);
                    return;
                }
            }
            else
            {
                // Move to the right child
                current = current->right_child;

                // If the right child is NULL, insert the new node here and return
                if (current == NULL)
                {
                    // Create a new node and set it as the right child
                    parent->right_child = create_node(item);
                    return;
                }
            }
        }
    }
}




// Pre-order Traversal:     Root -> Left -> Right
void preorder_display(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder_display(root->left_child);
        preorder_display(root->right_child);
    }
}




// In-order Traversal:     Left -> Root -> Right
void inorder_display(struct node *root)
{
    if (root != NULL)
    {
        inorder_display(root->left_child);
        printf("%d ", root->data);
        inorder_display(root->right_child);
    }
}




// Post-order Traversal:     Left -> Right-> Root
void postorder_display(struct node *root)
{

    if (root != NULL)
    {
        postorder_display(root->left_child);
        postorder_display(root->right_child);
        printf("%d ", root->data);
    }
}
