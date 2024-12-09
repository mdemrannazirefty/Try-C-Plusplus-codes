#include<iostream>
using namespace std;


class BST{
    int data;
    int key;
    BST *left, *right;



public:

    BST(); // default constructor
    BST(int, int); //parameterized constructor
    BST* Insert(BST*, int);  //insert function
    void inorder(BST*);  // inorder traverse
    BST* search(BST*, int);
};

BST :: BST()
     :data(0)
     ,left(NULL)
     ,right(NULL)
{
    //empty default body
}

BST ::BST (int val, int k)
{
    data = val;
    key = k;
    left = right = NULL;
}

BST* BST:: Insert(BST* root, int val,int k)
{
    if(!root)  // check whether the root is empty. if root empty then there is no node.
    {
        return new BST(val,k);    // create new node
    }
    else if(val>root->data)  // if data is greater than root
    {
        root->right = Insert(root->right, val);
    }
    else
    {
        root->left = Insert(root->left, val);   // if data is lesser than root
    }

    return root;
}

void BST :: inorder(BST* root)
{
    if(!root)   // if there is no root or the tree is empty
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
}

// C++ function to search a given key in a given BST
BST* BST:: search(BST* root, int k)
{
	// Base Cases: root is null or key is present at root
	if (root == NULL || root->k == k)
	return root;

	// Key is greater than root's key
	else if (root->k < k)
	return search(root->right, k);

	// Key is smaller than root's key
	else
        return search(root->left, k);
}


int main()
{
    BST b;       //object of BST
    BST *root = NULL;   // null pointer to the initial root
    root = b.Insert(root, 10);
    b.Insert(root, 20);
    b.Insert(root,5);
    b.Insert(root,40);
    b.Insert(root,30);

    b.inorder(root);
    cout<<"After Search :"<<endl;
    cout<<"Found :"<<b.search(root, 10);
}
