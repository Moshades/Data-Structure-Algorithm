#include <iostream>
using namespace std;

// Create a Node class
class Node
{
public:
    int data;
    Node *next;
};

// To push the list
void push(Node **headRef, int data)
{
    Node *ptr1 = new Node();
    Node *temp = *headRef;
    ptr1->data = data;
    ptr1->next = *headRef;

    // If the linked list is not NULL
    if(*headRef != NULL)
    {
        while (temp->next != *headRef)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; // for the first node

    *headRef = ptr1;
}

// To print the list
void printList(Node* head)
{
    Node* temp = head;

    // if linked list is not empty
    if (head != NULL)
    {
        do
        {
            cout << temp->data <<" ";
            temp = temp->next;
        } while (temp!=head);
    }
}

int main()
{
    /* Initialize lists as empty */
    Node *head = NULL;

    /* Created linked list will be 11->2->56->12 */
    push(&head, 12);
    push(&head, 56);
    push(&head, 2);
    push(&head, 11);

    cout << "Contents of Circular Linked List\n ";
    printList(head);

    return 0;
}
