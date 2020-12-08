#include <iostream>
#include <unordered_map>
using namespace std;
 
// Data structure to store a linked list node with random pointer
struct Node
{
    int data;
    Node* next;
    Node* random;
 
    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
 
// Recursive function to print a linked list
void traverse(Node* head)
{
    if (head == nullptr) {
        cout << "null" << '\n';
        return;
    }
 
    // print current node data and random pointer data
    if (head->random)
        cout << head->data << "(" << head->random->data << ") -> ";
    else
        cout << head->data << "(" << "X" << ") -> ";
 
    // recur for the next node
    traverse(head->next);
}

 struct Node * cloneLinkedList(Node * root) {
   struct Node * r = root;
   unordered_map < void * , void * > cmap;

   if (r == NULL)
     return NULL;
    
    //Create a map
   while (r != NULL) {
     struct Node * c = new Node(r -> data);
     cmap[r] = c;
     r = r -> next;

   }

    //re-assign
   r = root;

   struct Node * clone = (struct Node * ) cmap[r];
   struct Node * copy = clone;
   while (r != NULL) {

     clone -> next = (struct Node * ) cmap[r -> next];
     clone -> random = (struct Node * ) cmap[r -> random];

     r = r -> next;
     clone = clone -> next;
   }
   return copy;
 }
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
 
    head->random = head->next->next->next;
    head->next->next->random = head->next;
 
    cout << "Original Linked List:\n";
    traverse(head);
 
    Node* clone = cloneLinkedList(head);
 
    cout << "\nCloned Linked List:\n";
    traverse(clone);
    
 
    return 0;
}




