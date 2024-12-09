#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
};

void enqueue (Node ** head, int data)
{

  Node *new_node = new Node ();
  new_node->data = data;
  new_node->next = *head;
  *head = new_node;

}

void dequeue (Node ** head)
{
  Node *temp = *head;
  if (*head == NULL)
    {
      cout << ("Linked List Empty, nothing to delete");
      return;
    }
  *head = (*head)->next;
  delete (temp);
}

void display (Node * node)
{
  while (node != NULL)
    {
      cout << node->data << " ";
      node = node->next;
    }
  cout << endl;
}

int main ()
{

  Node *head = NULL;

  enqueue (&head, 10);
  enqueue (&head, 11);
  enqueue (&head, 12);
  enqueue (&head, 13);
  enqueue (&head, 14);
  enqueue (&head, 15);
  enqueue (&head, 16);
  enqueue (&head, 17);
  enqueue (&head, 18);

  cout << "Queue before deletion: ";
  display (head);
  dequeue (&head);
  cout << endl << "Queue after deletion: ";
  display (head);

  return 0;
}
