/* Lalitha is B.Tech student. During her final year Campus Interview, she has an opportunity to get a job in a software company in Banglore. */

#include <stdio.h>
#include <stdlib.h>
struct node *front = NULL;
struct node *rear = NULL;
struct node
{
 int data;
 struct node *next;
};
void linkedListTraversal(struct node *ptr)
{
 printf("Elements in Circular Queue are:");
 while (ptr->next != NULL)
 {
 printf("%d ", ptr->data);
 ptr = ptr->next;
 }
 printf("%d",ptr->data);
}
void enqueue(int d)
{
 struct node* new_n;
 new_n = (struct node*)malloc(sizeof(struct node));
 if(new_n==NULL){
 printf("Queue is Full");
 }
 else{
 new_n->data = d;
 new_n->next = NULL;
 if(front==NULL){
 front=rear=new_n;
 }
 else{
 rear->next = new_n;
 rear=new_n;
 }
 }
}
int dequeue()
{
 int val = -1;
 struct node *ptr = front;
 if(front==NULL){
 printf("Queue is Empty\n");
 }
 else{
 front = front->next;
 val = ptr->data;
 free(ptr);
 }
 return val;
}
int main()
{
 int n,i,t;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&t);
 enqueue(t);
 }
 linkedListTraversal(front);
 printf("\nDeleted value = %d\n",dequeue());
 printf("Deleted value = %d",dequeue());
 linkedListTraversal(front);
 return 0;
 printf("void enQueue(Queue* q,int value) int deQueue(Queue* q) void displayQueue(struct Queue* q)");
}
