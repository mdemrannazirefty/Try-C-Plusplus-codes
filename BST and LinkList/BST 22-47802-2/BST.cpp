#include <iostream>
using namespace std;


struct Node {
    int data;
    Node *left;
    Node *right;
};

Node* create(int x)
{
    Node* node = new Node;
    node->data = x;
    node->left = node->right = NULL;

    return node;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout<< root->data << "   ";
    inorder(root->right);
}

void search(Node* &cur, int x, Node* &parent)
{
    while (cur != NULL && cur->data != x)
    {
        parent = cur;
        if (x < cur->data)
            cur = cur->left;
        else
            cur = cur->right;
    }
}

Node* insertion(Node* root, int x)
{
    if (root == NULL)
        return create(x);
    if (x < root->data)
        root->left = insertion(root->left, x);
    else
        root->right = insertion(root->right, x);

    return root;
}

void deletion(Node*& root, int x)
{
    Node* parent = NULL;
    Node* cur = root;
    search(cur, x, parent);
    if (cur == NULL)
        return;
    if (cur->left == NULL && cur->right == NULL)
    {
        if (cur != root)
        {
            if (parent->left == cur)
                parent->left = NULL;
            else
                parent->right = NULL;
        }
        else
            root = NULL;
        free(cur);
    }
    else if (cur->left && cur->right)
    {
        Node* succ  = (cur->right);
        int val = succ->data;
        deletion(root, succ->data);
        cur->data = val;
    }
    else
    {
        Node* child = (cur->left)? cur->left: cur->right;
        if (cur != root)
        {
            if (cur == parent->left)
                parent->left = child;
            else
                parent->right = child;
        }
        else
            root = child;
        free(cur);
    }
}


int main()
{
  Node* root = NULL;
  root = insertion(root, 40);
  root = insertion(root, 30);
  root = insertion(root, 50);
  root = insertion(root, 20);
  root = insertion(root, 30);
  root = insertion(root, 40);
  root = insertion(root, 60);

  cout<<"The inorder binary tree is - \n";
  inorder(root);


  deletion(root, 20);
  cout<<"\nAfter deleting node 20: \n";
  inorder(root);
  insertion(root, 2);
  cout<<"\nAfter inserting node 2: \n";
  inorder(root);

  return 0;
}
