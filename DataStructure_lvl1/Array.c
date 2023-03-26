/* You are given an array A of Q integers and Q queries. */

#include <bits/stdc++.h>
using namespace std;

int sumof(int n){
    int ans = 0;
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    return ans;
}

int main()
{
    int n,x,y,an=-1;
    cin>>n>>n;
    vector<int> arr(n),arr2(n);
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
        arr2[i] = sumof(arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        cin>>x;
        an = -1;
        x--;
        y = x;
        if(x>=n){
            cout<<"-1 ";
            continue;
        }
        while(y<n){
            if(arr[x]<arr[y]){
                if(arr2[x]>arr2[y]){
                    an  = y+1;
                }
            }
            y++;
        }
        if(an!=-1){
            cout<<an<<' ';
        }
        else{
            cout<<"-1 ";
        }
        
        
    }
    
    return 0;
}
