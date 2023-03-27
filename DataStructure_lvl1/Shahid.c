/* On the last day of the semester, Shahid's students were talking and playing very loudly to the delight of the end of the semester. */

#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
struct Queue {
    node *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }
    void enqueue(int d)
    {
        node* n = new node(d);
        if (rear == NULL) {
            front = rear = n;
            return;
        }
        rear->next = n;
        rear = n;
    }
    void deQueue()
    {
        if (front == NULL)
            return;
        node* temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete (temp);
    }
    void print(){
        node* temp = front;
        if(front == NULL) return;
        while(front!=rear->next) {
            cout<<front->data<<" ";
            front = front->next;
        }
        front=temp;
    }
};
int main(){
    Queue q;
    int t,in;
    cin>>t;
    while(t--){
        cin>>in;
        q.enqueue(in);
        cout<<in<<" ";
    }
    cout<<endl;
    q.deQueue();
    q.print();
    cout<<endl;
    q.deQueue();
    q.print();
    return 0;
    cout<<" n = (struct node*)malloc(sizeof(struct node)); struct node *f = NULL; struct node *r = NULL; n->data = d; n->next = NULL; struct node* t;";
}
