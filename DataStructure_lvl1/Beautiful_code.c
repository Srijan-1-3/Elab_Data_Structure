/* A beautiful code of a tree of n nodes is a sequence of n-2 integers that uniquely specifies the structure of the tree. */

#include <bits/stdc++.h>
using namespace std;
#define f(i,a,n) for(int i=a;i<n;i++)
#define X(a,b) if(a==b)
vector< int > vi;
const int maxN = 2e5+5;
int N, a[maxN], deg[maxN];
priority_queue<int, vector<int>, greater<int>> q;
int main(){
 scanf("%d", &N);
 fill(deg+1, deg+N+1, 1);
 //for(int i = 0; i < N-2; i++)
 f(i,0,N-2){
 scanf("%d", &a[i]);
 deg[a[i]]++;
 }
 //for(int i = 1; i <= N; i++)
 f(i,1,N+1)
 //if(deg[i] == 1)
 X(deg[i],1)
 q.push(i);
 f(i,0,N-2){
 int u = a[i];
 int v = q.top(); q.pop();
 deg[u]--; deg[v]--;
 //if(deg[u] == 1)
 X(deg[u],1)
 q.push(u);
 printf("%d %d\n", v, u);
 }
 //for(int i = 1; i <= N; i++)
 f(i,1,N+1)
 if(deg[i])
 printf("%d ", i);
}
