#include <iostream>
using namespace std;

struct Node {
   int data;
   struct Node* next;
   struct Node* prev;
};

void insertfront(struct Node** head, int new_data)
{
   struct Node* newNode = new Node;

   newNode->data = new_data;
   newNode->next = (*head);
   newNode->prev = NULL;
   if ((*head) != NULL)
   (*head)->prev = newNode;
   (*head) = newNode;
}

void insertAfter(struct Node* prev_node, int new_data)
{
   if (prev_node == NULL) {
   cout<<"Previous node is required , it cannot be NULL";
   return;
}

   struct Node* newNode = new Node;
   newNode->data = new_data;
   newNode->next = prev_node->next;
   prev_node->next = newNode;
   newNode->prev = prev_node;
   if (newNode->next != NULL)
   newNode->next->prev = newNode;
}

void insertend(struct Node** head, int new_data)
{
   struct Node* newNode = new Node;
   struct Node* last = *head;
   newNode->data = new_data;
   newNode->next = NULL;
   if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
}
while (last->next != NULL)
last = last->next;
last->next = newNode;
newNode->prev = last;
return;
}

void displayList(struct Node* node) {
   struct Node* last;

   while (node != NULL) {
      cout<<node->data<<"<==>";
      last = node;
      node = node->next;
   }
   if(node == NULL)
   cout<<"NULL";
   }

int main()
{
   struct Node* head = NULL;
   insertend(&head, 50);
   insertfront(&head, 10);
   insertfront(&head, 20);
   insertend(&head, 30);
   insertAfter(head->next, 40);

   cout<<"Doubly linked list is: "<<endl;
   displayList(head);


   return 0;
}
