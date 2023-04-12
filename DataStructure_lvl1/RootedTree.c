/* You are given a rooted tree that contains N nodes. Each node contains a lowercase alphabet. */

#include<bits/stdc++.h>
using namespace std;
void dfs(int node,int parent,string &s,vector<vector<int>>&subroot,vector<vector<int>>& v1)
{
//visited[node]=1;
subroot[node][s[node-1]-'a']++;
//intime[node]=t;
//t++;
//z.push_back(node);
for( auto it:v1[node])
{
if(it!=parent)
{
dfs(it,node,s,subroot,v1);
for(int i=0;i<26;i++)
subroot[node][i]+=subroot[it][i];
}
}
//outtime[node]=t;
//t++;
}
int main()
{
int N,i, Q;
string S;
cin >> N >> Q;
cin >> S;
vector<vector<int>>v1(N+1);
for(i=0;i<N-1;i++)
{
int u, v;
cin >> u >> v;
 v1[u].push_back(v);
v1[v].push_back(u);
}
vector<vector<int>>subroot(N+1,vector<int>(26,0));
dfs(1,0,S,subroot,v1);
while(Q--)
{
int u;
char c;
cin >> u >> c;
cout<<subroot[u][c-'a']<<"\n";
//cout<<cnt<<endl;
}
return 0;
}
