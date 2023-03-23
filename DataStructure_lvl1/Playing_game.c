/* A and B are playing a game. In this game, both of them are initially provided with a list of n numbers. */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
        cin>>v[i];
    int a=0,b=n-1;
    while(a<n&&b>=0){
        if(v[a]==v[b]){
            b--;a++;
            cout<<"0 ";
        }
        else if(v[a]>v[b]){
            b--;
            cout<<"1 ";
        }
        else{
            a++;
            cout<<"2 ";
        }
    }
    return 0;
    cout<<"if(a[i]>a[j])";
}
