/* Lalitha is a IT expert who train youngsters struggling in coding to make them better. */

#include <iostream>
using namespace std;
struct node
{
int data;
node *next;
}*start = NULL;
void display()
{
if(start == NULL) return;
cout<<"->"<<start->data;
start = start -> next;
display();
}
void create()
{
int n;
cin>>n; int first;cin>>first;
node *p2 = new node;
p2 -> data = first;
p2 -> next = NULL;
start = p2;
for(int i =0; i<n-1; i++)
{
int a;
cin>>a;
node *yy = new node;
yy -> data = a;
yy -> next = NULL;
p2 -> next = yy;
p2=p2->next;
}
}
int main()
{
create();
cout<<"Linked List:";
display();
return 0;
}
