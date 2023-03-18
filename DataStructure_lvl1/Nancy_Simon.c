/* Nancy, Simon and Swati were all attending campus interviews. */

#include <iostream>
using namespace std;
void sort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void printElements(int a[], int n)
{   sort(a,n);
    for (int i = 0; i < n - 2; i++)
    cout << a[i] << " ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        printElements(a,n);
    }
    return 0;
}
