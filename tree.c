#include <stdio.h>
#include <stdlib.h>

//represents a node
typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

void free_tree(node *root);
void print_tree(node *root);

int main(void)
{
    // tree of size 0
    node *tree = NULL;

    //add number to list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;

    //Add no. to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        //free mem
        return 1;
    }
     n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;

     //Add no. to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        //free mem
        return 1;
    }
     n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

    //print tree
    print_tree(tree);

    //free tree
    free_tree(tree);
}
void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    free_tree(root->right);
    free_tree(root->left);
    free(root);
}
void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    //complex recursion.
    //reverse left and right to reverse order.
    print_tree(root->right);
    printf("%i\n", root->number);
    print_tree(root->left);
}
/*bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else if (number > true->number)
    {
        return search(tree->right, number);
    }
    else
    {
        return true;
    }
}*/