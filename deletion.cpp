#include <iostream>
using namespace std;
 
struct Node {
   int data;
   struct Node* next;
   };
 
Node* deletestart(struct Node* head)
{
   if (head == NULL)
   return NULL;
   Node* tempNode = head;
   head = head->next;
   delete tempNode;
 
   return head;
}
Node* deletelast(struct Node* head)
{
   if (head == NULL)
   return NULL;
 
   if (head->next == NULL) {
      delete head;
      return NULL;
   }
 
Node* second_last = head;
while (second_last->next->next != NULL)
second_last = second_last->next;
 
delete (second_last->next);
 
second_last->next = NULL;
 
return head;
}
 
void insert(struct Node** head, int new_data)
{
   struct Node* newNode = new Node;
   newNode->data = new_data;
   newNode->next = (*head);
   (*head) = newNode;
}

int main()
{
   Node* head = NULL;
   insert(&head, 2);
   insert(&head, 4);
   insert(&head, 6);
   insert(&head, 8);
   insert(&head, 10);
 
     Node* temp;
 
   for (temp = head; temp != NULL; temp = temp->next)
   cout << temp->data << " ";
   cout<<endl;
   
 
   head = deletestart(head);
   for (temp = head; temp != NULL; temp = temp->next)
   cout << temp->data << " ";
   cout<<endl;
 
   head = deletelast(head);
   for (temp = head; temp != NULL; temp = temp->next)
   cout << temp->data << " ";
   cout<<endl;
   return 0;
}