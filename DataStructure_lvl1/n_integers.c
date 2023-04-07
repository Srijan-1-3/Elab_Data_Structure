/* Given an array of n integers, your task is to process q queries of the form. */

#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,q,i,a,b;
 cin>>n>>q;
 int x[n];
 for(i=0;i<n;i++)
 cin>>x[i];
 while(q--){
 int sum=0;
 cin>>a>>b;

 for(i=a;i<=b;i++)
 sum=sum+x[i-1];
 cout<<sum<<endl;
 }
}
