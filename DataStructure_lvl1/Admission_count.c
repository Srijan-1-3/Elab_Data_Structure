/* Admission for the current academic year is happening in Most of the Universities across the Country. */

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
int count(struct node* head,int search_for)
{
    struct node* current = head;
    int count = 0;
    while (current != NULL)
    {
        if (current->data == search_for)
           count++;
        current = current->next;
    }
    return count;
}
int main()
{
    struct node* head = NULL;
int n,b[20],i,a,j;
   scanf("%d",&n);
  printf("Linked list:");
  for(i=0,j=n-1;i<n;i++,j--)
  {scanf("%d",&a);
   b[j]=a;
   push(&head, a);}
  for(i=0;i<n;i++)
    printf("-->%d",b[i]);
  scanf("%d",&a);
      printf("\nCount of %d:%d",a, count(head, a));
    return 0;
}
