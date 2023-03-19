/* Sajid is a first year student in reputed institution. */

#include <iostream>
using namespace std;
int main() {
    int n,i,temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n/2;i++) {
        temp = arr[n-1-i];
        arr[n-1-i]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<< " ";
}
