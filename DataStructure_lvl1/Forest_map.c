/* You are given an nxn grid representing the map of a forest. */

#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (int i=a; i<b; ++i)
int dp[1005][1005];
int main(){
    int n,m; cin>>n>>m;
    rep(i,1,n+1){
        rep(j,1,n+1){
            char x; cin>>x;
            dp[i][j] = (dp[i-1][j] - dp[i-1][j-1]) + dp[i][j-1] + (x=='*');
        }
    }
    while(m--){
        int y1 , x1, y2, x2; cin>>y1>>x1>>y2>>x2;
        cout<<dp[y2][x2]+ dp[y1-1][x1-1] - dp[y2][x1-1] - dp[y1-1][x2]<<endl;
    }
    return 0;
    cout<<"for(i=1;i<=n;i++)";
}
