/* Admission for the current academic year is happening in most of the universities across the country. */

#include <iostream>
using namespace std;
struct node{
    int val;
    struct node *next;
}*head = new node;
void append(struct node *head,int a)
{   node *n =new node;
    n->val=a;
    n->next=NULL;
    while(head->next!=NULL)
        head=head->next;
    head->next=n;
}
void printMiddle(struct node *head)
{
    node* next=NULL,*prev=NULL;
    node *temp=head;
    int j=0;
    while(temp!=NULL)
    {   j++;
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
    }
    temp=prev;
    j/=2;
    j+=1;
    cout<<"Linked list:";
    while(temp!=NULL)
    {   cout<<"-->"<<temp->val;
        temp=temp->next;}
    temp=prev;
    cout<<endl;
    while(j--)
    {   if(j==0)
        cout<<"The middle element is ["<<temp->val<<"]";
        temp=temp->next;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int a;
        cin>>a;
        append(head,a);
    }
    head=head->next;
    printMiddle(head);
}
