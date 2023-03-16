/* Prabhu Salamon is planning to make a very long journey across the cityside by train. */ 

#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
        int n,d;
        cin>>n>>d;
        int x[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=n-1;i>=0;i--){
            int temp=(d-(d%x[i]));
            d=temp;
            
        }
        cout<<d<<endl;
        
        
    }
    return 0;
}
