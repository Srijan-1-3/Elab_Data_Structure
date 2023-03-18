/* Issac is a Language teacher at a high school in Madurai. */

#include <iostream>
using namespace std;
int rotLeft(int arr[],int n,int d){
 for(int i=d;i<n;i++)
 cout<<arr[i]<<" ";
 for(int i=0;i<d;i++)
 cout<<arr[i]<<" ";
 return 1;
}
int rotRight(int arr[],int n,int d){
 for(int i=n-d;i<n;i++)
 cout<<arr[i]<<" ";
 for(int i=0;i<n-d;i++)
 cout<<arr[i]<<" ";
 return 1;
}
int main()
{
 int n,d;
 char c;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 cin>>arr[i];
 cin>>d;
 int z;
 z=d%n;
 cin>>c;
 if(c=='L')
 rotLeft(arr,n,z);
 else
 rotRight(arr,n,z);
return 0;
}
