#include <iostream>
using namespace std;

struct node
{
    int data = 0;
    node *right = nullptr;
    node *left = nullptr;
};
void tree_sort(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    tree_sort(root->left);
    cout << root->data << " ";
    tree_sort(root->right);
}
void insert(node *&root, int x)
{
    if (root == nullptr)
    {
        root = new node;
        root->data = x;
    }
    else if (x > root->data)
    {
        insert(root->right, x);
    }
    else if (x < root->data)
    {
        insert(root->left, x);
    }
}

int main(){

    node *tree=new node();
    insert(tree,7);
    insert(tree,8);
    insert(tree,9);
    insert(tree,16);
    insert(tree,13);
    insert(tree,89);
    insert(tree,56);
    insert(tree,4);

    tree_sort(tree);
}