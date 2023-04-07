/* You are given a tree consisting of nn nodes. */

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define pb push_back
vi adj[200005];
int d=0,x=0;
void solve(){}
void dfs(int s, int p, int dep){
 for (auto i: adj[s]){
 if (i!=p){
 dfs(i,s,dep+1);
 }
 }
 if (dep>d) d = dep, x = s;
}
int main(){
 solve();
 int n;
 cin>>n;;
 rep(i,0,n-1){
 int x,y; cin>>x>>y;
 adj[x].pb(y), adj[y].pb(x);
 }
 dfs(1,0,0);
 dfs(x,0,0);
 cout<<d;
 return 0;
 cout<<"void link(int i,int j) void dfs(int p,int i,int d)";
}
