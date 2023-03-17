/* One day Priya was jogging and realized that her life was boring. */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define F first
#define S second
 
const int N = 2021;
pair<int, int> a[N];
 
int main() {
    ll t;
    cin>>t;
    while(t--){
        int n,L;
    scanf("%d %d", &n, &L);
    for(ll i=0;i<n;i++) {
        scanf("%d %d", &a[i].F, &a[i].S);
    }
    sort(a , a + n);
    int possible=0;
    for (ll i=0;i<n;i++) {
        int maxright = a[i].F + L;
        int cur_right = a[i].S;
        for(ll j=0;j<n;j++) {
            if ((a[j].F <= cur_right) && (a[j].F > a[i].F) && (a[j].S <= maxright)) {
                cur_right = max(cur_right, a[j].S);
            }
        } 
    if(cur_right==maxright){
                    possible = 1;
                    break;
                }
            }
            if(possible == 1) {
            cout<<"Yes"<<endl;
            } else {
            cout<<"No"<<endl;
            }
        }
    return 0;
}
