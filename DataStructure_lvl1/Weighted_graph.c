/* You are given a weighted graph with N vertices ad M edges. Find the total weight of its maximum spanning tree. */

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
struct edge
{
 int u;
 int v;
 int w;
};
edge a[100005];
int parent[100005];
bool comp (edge a , edge b)
{
 return a.w>b.w;
}
int find_parent(int u) 
{
 if(parent[u]==u)
 return u;
 else
 return parent[u]=find_parent(parent[u]);
}
void merge(int u, int v) 
{
 parent[u]=v;
}
int main()
{
 int t;
 cin>>t;
 while(t--) {
 int n,m;
 cin>>n>>m;
 for(int i=1;i<=n;i++)
 parent[i]=i;
 for(int i=0;i<m;i++) {
 cin>>a[i].u>> a[i].v >> a[i].w;
 }
 sort(a,a+m,comp);
 ll ans=0;
 for(int i=0;i<m;i++) {
 int x=find_parent(a[i].u);
 int y=find_parent(a[i].v);
 if(x!=y)
 {
 merge(x,y);
 ans+=a[i].w;
 }
 }
 cout<<ans<<endl;
 }
 return 0;
 cout<<"int printheap(int N)";
}
