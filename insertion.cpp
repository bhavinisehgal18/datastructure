#include <iostream>
using namespace std;
 
struct Node
{
   int data;
   struct Node *next;
};

void push(struct Node** head, int node_data)
{
   
   struct Node* newNode = new Node;
 
   newNode->data = node_data;
 
   newNode->next = (*head);
 
   (*head) = newNode;
}
 
void insertAfter(struct Node* prev_node, int node_data)
{
   struct Node* newNode =new Node; 
 
   newNode->data = node_data;
 
   newNode->next = prev_node->next;
 
   prev_node->next = newNode;
}
 
void append(struct Node** head, int node_data)
{

struct Node* newNode = new Node;
 
struct Node *last = *head; 
 
newNode->data = node_data;
 
newNode->next = NULL;
 
if (*head == NULL)
{
*head = newNode;
return;
}
 
while (last->next != NULL)
last = last->next;
 
last->next = newNode;
return;
}
 
void displayList(struct Node *node)
{
   while (node != NULL)
   {
      cout<<node->data<<" ";
      node = node->next;
   }
 

} 
int main() 
{ 
struct Node* head = NULL; 
 
append(&head, 30); 
 
push(&head, 40); 
  
insertAfter(head->next, 100);
 
displayList(head);
 
return 0;
}
  