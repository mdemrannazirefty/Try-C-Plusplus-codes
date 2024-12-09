#include<stdlib.h>
#include <iostream>
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
void insertatfirst(Node** head, int new_data)
 {
   Node* new_node = (Node*)malloc(sizeof(Node));

  new_node->data = new_data;
  new_node->nextNode = (*head);
  (*head) = new_node;
}

void insertafter(Node* prev_node, int new_data)
 {
  if (prev_node == NULL) {
  cout << "The previous node cannot be NULL";

  return;
  }
  Node* new_node = (Node*)malloc(sizeof(Node));
  new_node->data = new_data;
  new_node->nextNode = prev_node->nextNode;
  prev_node->nextNode = new_node;
}

void insertatlast(Node** head, int new_data)
 {
  Node* new_node = (Node*)malloc(sizeof(Node));
  Node* last = *head;

  new_node->data = new_data;
  new_node->nextNode = NULL;

  if (*head== NULL) {
  *head= new_node;
  return;
  }

  while (last->nextNode != NULL) last = last->nextNode;

  last->nextNode = new_node;
  return;
}

void deleteNode(Node** head, int key)
{
  Node *temp = *head, *prev;

  if (temp != NULL && temp->data == key) {
  *head= temp->nextNode;
  free(temp);
  return;
  }
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->nextNode;
  }

  if (temp == NULL) return;
  prev->nextNode = temp->nextNode;

  free(temp);
}

bool searchNode(Node** head, int key)
{
  Node* current = *head;

  while (current != NULL) {
  if (current->data == key)
    return true;
  current = current->nextNode;
  }
  return false;
}

void printList(Node* node)
{
  while (node != NULL) {
  cout << node->data << " ";
  node = node->nextNode;
  }
}
int main()
{

    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* fourth=new Node();

    head->data=1;
    head->nextNode=second;
    second->data=2;
    second->nextNode=third;
    third->data=3;
    third->nextNode=fourth;
    fourth->data=4;
    fourth->nextNode=NULL;

    traverse(head);

  insertatfirst(&head, 2);
  insertatlast(&head, 1);

  insertatfirst(&head, 3);
  insertatlast(&head, 4);
  insertafter(head->nextNode, 5);
  cout<<endl;

  cout << "Insert List: "<<endl;
  printList(head);
  cout<<endl;

  cout << "Delete element: "<<endl;
  deleteNode(&head, 3);
  printList(head);

  int a = 3;
  if (searchNode(&head, a)) {
        cout<<endl<<"Search Element: ";
  cout << a<< " is found";
  }
  else {
  cout << endl << a<< " is not found";
  }

return 0;
}
