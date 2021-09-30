#include <bits/stdc++.h>
using namespace std;
 
// Link list node
struct Node {
    int data;
    struct Node* next;
};
 
/* Function to get the median of the linked list */
void printMidean(Node* head)
{
    Node* slow_ptr = head;
    Node* fast_ptr = head;
    Node* pre_of_slow = head;
 
    if (head != NULL) {
        while (fast_ptr != NULL && fast_ptr->next != NULL) {
 
            fast_ptr = fast_ptr->next->next;
 
            // previous of slow_ptr
            pre_of_slow = slow_ptr;
            slow_ptr = slow_ptr->next;
        }
 
        // if the below condition is true linked list
        // contain odd Node
        // simply return middle element
        if (fast_ptr != NULL)
            cout << "Median = " << slow_ptr->data;
 
        // else linked list contain even element
        else
            cout << "Median = "
                 << float(slow_ptr->data + pre_of_slow->data) / 2;
    }
}
 
/* Given a reference (pointer to
    pointer) to the head of a list
    and an int, push a new node on
    the front of the list. */
void push(struct Node** head_ref, int new_data)
{
    // allocate node
    Node* new_node = new Node;
 
    // put in the data
    new_node->data = new_data;
 
    // link the old list
    // off the new node
    new_node->next = (*head_ref);
 
    // move the head to point
    // to the new node
    (*head_ref) = new_node;
}
 
// Driver Code
int main()
{
    // Start with the
    // empty list
    struct Node* head = NULL;
 
    // Use push() to construct
    // below list
    // 1->2->3->4->5
    
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
 
    // Check the count
    // function
    printMidean(head);
 
    return 0;
}
// Input :add 1
// add 2
//add 3
// add 4
//add 5

// output 
// Medain = 3 
