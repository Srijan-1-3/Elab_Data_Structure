/* Dr.Jegan is faculty, who handling data structure course for software engineering department second year students. */

#include<bits/stdc++.h>
using namespace std;
struct node {
 int data;
 node *next;
};
void insertAtEnd(node** head_ref, int new_data) {
 node* new_node = (node*)malloc(sizeof( node));
 node* last = *head_ref;
 new_node->data = new_data;
 new_node->next = NULL;
 if (*head_ref == NULL) {
 *head_ref = new_node;
 return;
 }
 while (last->next != NULL) last = last->next;
 last->next = new_node;
 return;
}
int main() {
 node* head = NULL;
 int n,c,z,i;
 cin>>n;
 for(i=0;i<n;i++){
 cin>>c;
 insertAtEnd(&head,c);
 }
 cin>>z;
 for(int i=0;i<z;i++)
 head=head->next;
 cout << "Linked List:";
 node* node=head;
 while(node!=NULL){
 cout<<"->"<<node->data;
 node=node->next;
 }
 return 0;
 cout<<"void create()";
}
