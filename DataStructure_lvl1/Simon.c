/* Simon has given N ratios in the form of A and B that is represented as A/B. */

#include<iostream>
using namespace std;
double func(double arr[][2],double r,int n){
 double ans = 0;
 for (int i = 0; i < n; i++) {
 ans+= (arr[i][0]/(arr[i][1]+r));
 }
 return ans;
}
int main(){
 int n,two;
 cin>>n>>two;
 double arr[n][2];
 for (int i = 0; i < n; i++) {
 cin>>arr[i][0]>>arr[i][1];
 }
 double hi=2000,lo=0,mid,curr,k;
 cin>>k;
 while(hi-lo>1e-7){
 mid=(hi+lo)/2;
 curr=func(arr,mid,n);
 if(curr<k){
 hi = mid;
 }
 else{
 lo = mid + 1e-7;
 }
 }
 printf("%.6f",mid);
 
 return 0;
 printf("double solve(double** arr,double K,int n)");
}
