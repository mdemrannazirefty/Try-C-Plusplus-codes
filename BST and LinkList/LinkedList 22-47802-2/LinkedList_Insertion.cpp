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
void insert(Node* prevNode, int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->nextNode = prevNode->nextNode;
    prevNode->nextNode = newNode;
}



int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* fourth=new Node();
    Node* fifth=new Node();
    Node* newNode= new Node();

    head->data=10;
    head->nextNode=second;
    second->data=20;
    second->nextNode=third;
    third->data=50;
    third->nextNode=fourth;
    fourth->data=15;
    fourth->nextNode=fifth;
    fifth->data=10;
    fifth->nextNode=NULL;

    newNode->data=30;
    insert(second,30);
    traverse(head);





    return 0;
}
