/* The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate span stock's price for all n days*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n;cin>>n;
 int arr[n+1];arr[0] = 10000;
 for (int i = 1; i < n+1; i++)
 cin>>arr[i];
 for (int i = 1; i < n+1; i++) {
 int j = i-1;
 while(arr[i]>arr[j]) j--;
 cout<<i-j<<' ';
 }
return 0;
cout<<"void printArray(int arr[],int n)void calculateSpan(int price[],int n,int S[])";
}
