/* A company has n employees, who form a tree hierarchy where each employee has a boss, except for the general director. */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 200005
#define pb push_back
vector<int>tree[MAX];
ll up[MAX][20];
void solve(){}
void link(int i,int j){
 up[i][0]=j;
 for(int m=1;m<20;m++){
 if(up[i][m-1]!=-1)
 up[i][m]=up[up[i][m-1]][m-1];
 else
 up[i][m]=-1;
 }
 for(auto child:tree[i]){
 if(child!=j) link(child,i);
 }
}
int ans_query(int src,int jump){
 if(src==-1 or jump==0)return src;
 for(int i=19;i>=0;i--){
 if( jump>= (1<<i)){
 return ans_query(up[src][i],jump-(1<<i));
 }
 }
 return 1;
}
int main(){
 solve();
 int n,q;
 cin>>n>>q;
 for(int i=2;i<=n;i++){
 int ee;
 cin>>ee;
 tree[i].pb(ee);
 tree[ee].pb(i);
 }
 link(1,-1);
 while(q--){
 int node,jump;
 cin>>node>>jump;
 cout<<ans_query(node,jump)<<endl;
 }
}
