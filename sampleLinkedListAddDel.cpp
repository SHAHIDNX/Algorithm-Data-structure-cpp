#include <stdio.h>
#include <stdlib.h>
// To execute C, please define "int main()"
typedef struct Node {
  struct Node* next;
  int data;
}Node;
void deleteData(int data);
void insertData(int data);
 void printList ();

Node* head=NULL;
int main() {
  insertData(10);
 insertData(20);
  insertData(30);
  insertData(40);
  printList();

deleteData(40);
  printList();
  deleteData(5);
  printList();

  return 0;
}

void insertData(int data)
{
  Node* newnode = (Node*) malloc(sizeof(Node));
  newnode->next = NULL;
  newnode->data = data;
  
 // printList();
  if (head == NULL)
  {
 
     head = newnode;
      printf("1st entry data:%d\n",head->data);
    return;
  }
  
   Node* temp = head;

 
  while(temp->next != NULL)
  {
      //printf("Next entry data:%d\n",temp->data);
    temp = temp->next;
  }
  
  temp->next = newnode;
  return;
}
  
 void printList ()
 {
   Node* temp=head;
   if (temp == NULL)
   {
     printf ("List is empty\n");
      return;
    }
   
   while(temp != NULL){
     
     printf("data: %d ",temp->data);
     temp = temp->next;
   }
   printf ("\n\n");
   
   
 }

  void deleteData(int data)
  { 
    Node* curr=head;
    Node * prev = NULL;
     if (curr == NULL)
     {
       printf ("List is empty\n");
        return;
      }
    
    if (head->next != NULL)
    {
      if  (head->data == data)
      {
             head = head->next;
        return;
      }
      
    }
    
    
    while(curr != NULL){
      
      if (curr->data == data)
      {
        printf("Deleting data: %d\n ",curr->data);
        prev->next = curr->next;
        //free(curr);
        return ;
      }
     prev = curr;
    curr= curr->next;
   }
    
    printf (":::List doesn't have elememt with key:%d\n",data);
  }
