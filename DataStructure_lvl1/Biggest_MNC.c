/* One of the biggest MNC has organize the programming contest for their employees. */

#include <bits/stdc++.h>
#define f(i,a,n) for(i=a;i<n;i++)
using namespace std;
int computeLongestSubarray(int arr[], int k, int n)
{
int j,i, maxLength = 1;
f(i,0,n)
{
int minOfSub = arr[i];
int maxOfSub = arr[i];
f(j,i+1,n)
{
if (arr[j] > maxOfSub)
maxOfSub = arr[j];
if (arr[j] < minOfSub)
minOfSub = arr[j];
if ((maxOfSub - minOfSub) <= k)
{
int currLength = j - i + 1;
if (maxLength < currLength)
maxLength = currLength;
}
}
}
return maxLength;
}
int main()
{
int n,i;
cin>>n;
int arr[n];
f(i,0,n)
cin>>arr[i];
int k = 1;
 sort(arr,arr+n);
int maxLength = computeLongestSubarray(arr, k, n);
cout << (maxLength);
return 0;
cout<<"void insertionSort(int *p,int n) arr=(int *)malloc(n*sizeof(int)); insertionSort(arr,n);";
}
