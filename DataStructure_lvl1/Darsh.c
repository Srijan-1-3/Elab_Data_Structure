/* Darsh recently found a new rectangular circuit board that he would like to recycle. */

#include <iostream>
using namespace std;
bool ok[309][309][309];
int main()
{
    int t;cin>>t;
    while(t--){
        int A[309][309];int B[309][309]={};
        int r,c,l;cin>>r>>c>>l;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>A[i][j];
                if(j==0 || A[i][j]!=A[i][j-1])B[i][j]=1;
                else B[i][j]=B[i][j-1]+1;
            }
        }int res = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int target = B[i][j],res1=0;
                for(int k=i;k<r;k++){
                    if(B[k][j]>=target)res1+=target;
                    else break;
                }
                 if(res1 > res)res=res1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
