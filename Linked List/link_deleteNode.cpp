// demonstration of singly list deletion

#include<iostream>
using namespace std;

// Linked list node
class Node{
public:
    int data;
    Node* next;
};

// Give a new node in front of the list
void push(Node** headRef, int newData)
{
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = (*headRef);
    (*headRef) =newNode;
}

// We put a delete linked list here
void deleteNode(Node** headRef, int key)
{
    // Store the head node
    Node* tmp = *headRef;
    Node* prev = NULL;

    // If head node itself holds
    // the key to be deleted
    if(tmp != NULL && tmp->data == key)
    {
        *headRef = tmp->next;
        delete tmp;
        return;
    }

    // This else function is to find
    // the key that needs to be deleted
    // prev->next
    else
    {
        while(tmp != NULL && tmp->data != key)
        {
            prev = tmp;
            tmp = tmp->next;
        }

        // If the key was not present in the linked list
        if (tmp == NULL)
            return;

        // Unlink the node from linked list
        prev->next = tmp->next;

        // Free memory
        delete tmp;
    }
}

// This function to prints the content
void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

// main function
int main()
{

    // Start with the empty list
    Node* head = NULL;

    // Add elements in linked list
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("Created Linked List: ");
    printList(head);

    deleteNode(&head, 1);
    puts("\nLinked List after Deletion of 1: ");

    printList(head);

    return 0;
}
