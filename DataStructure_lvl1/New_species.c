/* A new species is trying to rule the planet. This species is creating their own population outburst to dominate other species. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct cell{
 int name;
 int level;
 int capacity;
};
struct cell queue[1000001];
struct cell arr[1000001];
int front;
int end;
void init_queue(){
 front = 0;
 end = 0;
}
void enqueue(int name,int capacity,int level){
 queue[end].name = name;
 queue[end].level = level;
 queue[end].capacity = capacity;
 end = end + 1;
}
int is_empty(){
 if(end == front)
 return 1;
 return 0;
}
void dequeue()
{
if(!is_empty())
front++;
}
int main(){
 int n,rc;
 init_queue();
 scanf("%d %d",&n,&rc);
 int i,j,k;
 for(i=0;i<n;i++){
 scanf("%d %d",&arr[i].name,&arr[i].capacity);
 }
 enqueue(0,rc,0);
 i=0;
 while(!is_empty()){
 int par = queue[front].name;
 int cap = queue[front].capacity;
 int lev = queue[front].level+1;
 k=1;
 for(j=0;j<cap&&i<n;j++,i++){
 printf("%d %d %d\n",par,lev,k++);
 enqueue(arr[i].name,arr[i].capacity,lev);
 }
 dequeue();
 }
 return 0;
}
