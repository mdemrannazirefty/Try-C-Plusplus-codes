#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insert(Node** head, int data) {
    Node* newNode = new Node; // Create a new node
    newNode->data = data; // Set the data
    newNode->next = *head; // Link the new node to the head node
    *head = newNode; // Set the head to the new node
}

// Function to traverse the linked list
void traverse(Node* head) {
    while (head != nullptr) { // Traverse the linked list
        cout << head->data << " "; // Print the data value of the current node
        head = head->next; // Move the current node to the next node
    }
}

// Function to search for a node with a given data value in the linked list
bool search(Node* head, int data) {
    while (head != nullptr) { // Traverse the linked list
        if (head->data == data) { // Check if the current node's data matches the given data value
            return true; // If found, return true
        }
        head = head->next; // Move the current node to the next node
    }
    return false; // If not found, return false
}

// Function to delete a node with a given data value from the linked list
void deleteNode(Node** head, int data) {
    Node* prev = nullptr; // Initialize a pointer to the previous node
    Node* curr = *head; // Initialize a pointer to the current node
    while (curr != nullptr && curr->data != data) { // Traverse the linked list until a node with the given data value is found or the end of the linked list is reached
        prev = curr; // Move the previous node pointer to the current node
        curr = curr->next; // Move the current node pointer to the next node
    }
    if (curr == nullptr) { // If the node with the given data value is not found
        return; // Return without deleting anything
    }
    if (prev == nullptr) { // If the node with the given data value is the head node
        *head = curr->next; // Set the head to the next node
    } else { // If the node with the given data value is not the head node
        prev->next = curr->next; // Link the previous node to the next node
    }
    delete curr; // Delete the current node
}

int main() {
    Node* head = nullptr; // Initialize an empty linked list
    insert(&head, 5); // Insert a node with data 5
    insert(&head, 10); // Insert a node with data 10
    insert(&head, 15); // Insert a node with data 15
    cout << "Linked List: ";
    traverse(head); // Traverse the linked list
    cout << endl;
    int searchData = 10;
    if (search(head, searchData)) { // Search for a node with data 10
        cout << searchData << " found in the Linked List." << endl;
    } else {
        cout << searchData << " not found in the Linked List." << endl;
    }
    int deleteData = 10;
    deleteNode(&head, deleteData); // Delete a node with data 10
    cout << "Linked List after deleting " << deleteData << ": ";
    traverse(head);
}
