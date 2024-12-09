#include<iostream>
using namespace std;

class BST
{
    int data;
    BST *left, *right;

public:
    BST(); // empty constructor
    BST(int);  // parameterized constructor
    BST* Insert(BST*, int);   // Insert function
    void inorder(BST*);  // traverse in inorder

};

BST :: BST()
     : data(0)
     ,left(NULL)
     ,right(NULL)
{
    // body of the default constructor
}

BST :: BST(int val)
{
    data = val;  // val is passed through data member data
    left = right = NULL;
}

BST* BST :: Insert(BST *root, int val)
{
    if(!root)   // to check whether there is a root or not. The tree is empty or not
    {
        return new BST(val);   // call the parameterized cons to create BST object
    }

    else if(val> root->data)
    {
        root->right = Insert(root->right, val);
    }
    else
    {
        root->left = Insert(root->left, val);
    }

    return root;
}

void BST :: inorder(BST *root)
{
    if(!root)  // if there is no root no tree then no traverse
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}
int main()
{
    BST b;
    BST *root = NULL;
    root = b.Insert(root ,20);
    b.Insert(root ,30);
    b.Insert(root ,5);
    b.Insert(root ,10);
     b.inorder(root);
}
