/* Dr. Siva Jayaprakash is a faculty, who handling data structure course for IT department second year students. */

#include <iostream>
using namespace std;
void tel()
{
return;
}
struct node
{
int data;
node *next;
}*head = NULL;
void create()
{
int n;
cin>>n;
struct node *p1 = new node;
int m;
cin>>m;
p1 -> data = m;
head = p1;
int i;
for(i=0;i<n-1;i++)
{
int a;
cin>>a;
node *tt = new node;
tt -> data = a;
p1 -> next = tt;
p1=p1->next;
}
p1 -> next = NULL;
int del;
bool found = false;
cin>>del;
node *nn = head;
while(nn != NULL)
{
nn = nn -> next;
node *dd = nn;
int m = del; while(m-- > -1)
{
dd = dd -> next; if(dd == NULL)
{
nn -> next = NULL;
found = true; break;}}
if(found) break; }
cout<<"Linked List:";
while(head != NULL)
{
cout<<"->"<<head -> data;
head = head -> next; }}
int main()
{
create();
return 0;
cout<<"for(i=0;i<n;i++)";
}

