/* The sam is enjoying a wonderful vacation in Byteland. What makes the sam impressed the most is the road sytem of the country. */

#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct state { int len,link; map<int,int> next;};
const int MAXL=200005;state st[MAXL];int sz,last;
void sa_init(){
    st[0].len=0; st[0].link=-1; sz++; last = 0; }
void sa_extend(int c){
    int cur=sz++; st[cur].len=st[last].len+1; 
    int p=last;
    while(p!=-1 && !st[p].next.count(c)){
        st[p].next[c]=cur;  p=st[p].link; }
    if(p == -1){ st[cur].link = 0;} 
    else{ int q=st[p].next[c];
        if(st[p].len+1 == st[q].len){st[cur].link=q;} 
        else { int clone = sz++;
            st[clone].len = st[p].len + 1;
            st[clone].next = st[q].next;
            st[clone].link = st[q].link;
            while (p!=-1 && st[p].next[c]==q){
                st[p].next[c]=clone; p=st[p].link; }
            st[q].link = st[cur].link = clone; 
        }
    } last = cur; }
const int N = 1e5 + 100;
vector<int> G[N];
int deg[N];
void dfs(int s, int p){
  sa_extend(deg[s]);
  int tmp = last;
  for(auto it : G[s]){
    if(it == p) continue;
    dfs(it , s);
    last = tmp;
  }
}
ll dp[MAXL];
int main(){
  ios_base::sync_with_stdio(false);
  cout.tie(0); cin.tie(0);
  sa_init();
  int n; cin >> n;
  int u , v;
  for(int i = 0;i < n-1 ; ++i){
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
    ++deg[u];
    ++deg[v];
  }
  dfs(1 , -1);
  vector<pair<int,int> > topo(sz);
  for(int i = 0;i < sz ; ++i) topo[i] = make_pair(st[i].len , i);
  sort(topo.begin() , topo.end());
  for(int i = sz-1;i >= 0; --i){
    u = topo[i].second;
    dp[u] = 1;
    for(auto it : st[u].next){
      dp[u] += dp[it.second];
    }
  }
  cout << dp[0]-1 << endl;

  return 0;
}
