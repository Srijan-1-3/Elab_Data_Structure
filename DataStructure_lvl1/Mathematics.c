/* In mathematics, a permutation of a set is, loosely speaking, an arrangement of its members into a sequence or linear order, or if the set is already ordered,
   a rearrangement of its elements.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,i,sum=0;
 cin>>n;
 int arr[n];
 for(i=0;i<n;i++)
 cin>>arr[i];
 sort(arr,arr+n);
 for(i=0;i<n;i++)
 {
 int z= arr[n-i-1]-(i+1);
 //cout<<z<<" ";
 //cout<<abs(z);
 sum=sum+abs(z);
 }
 cout<<sum;
 return 0;
 cout<<"swap(l,r);";
}
