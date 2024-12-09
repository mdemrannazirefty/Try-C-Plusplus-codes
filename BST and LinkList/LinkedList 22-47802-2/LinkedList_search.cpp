#include<stdlib.h>
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* nextNode;
};

Node* search(Node* n, int value)
{
    Node* curr = n;
    while (curr != NULL)
    {
        if (curr->data == value)
        {
            return curr;
        }
        curr = curr->nextNode;
    }
    return NULL;
}


void traverse(Node* n, int searchValue)
{
    Node* curr=n;
    while(curr!=NULL)
    {
        cout<<curr->data<<"---->";
        curr=curr->nextNode;
    }
    cout << "NULL" << endl;

    Node* nodeToFind = search(n, searchValue);
    if (nodeToFind != NULL)
    {
        cout << "Node found with data: " << nodeToFind->data << endl;
    }
    else
    {
        cout << "Node not found" << endl;
    }
}


int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* fourth=new Node();
    Node* fifth=new Node();
    Node* newNode= new Node();

    head->data=22;
    head->nextNode=second;
    second->data=27;
    second->nextNode=third;
    third->data=30;
    third->nextNode=fourth;
    fourth->data=55;
    fourth->nextNode=fifth;
    fifth->data=10;
    fifth->nextNode=NULL;

    int searchvalue;

    cout<<"Enter Search value :";
    cin>>searchvalue;

    traverse(head,searchvalue);





    return 0;
}
