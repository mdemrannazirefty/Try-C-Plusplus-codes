#include<stdlib.h>
#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* nextNode;
};

void traverse(Node* n)
{
    Node* curr=n;
    while(curr!=NULL)
    {
        cout<<curr->data<<"---->";
        curr=curr->nextNode;
    }
}

int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* fourth=new Node();
    Node* fifth=new Node();

    head->data=10;
    head->nextNode=second;
    second->data=30;
    second->nextNode=third;
    third->data=40;
    third->nextNode=fourth;
    fourth->data=5;
    fifth->nextNode=NULL;

    traverse(head);

    return 0;
}
