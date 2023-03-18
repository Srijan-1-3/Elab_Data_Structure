/* Tina has given a boolean matrix mat[P][Q] of size P x Q to Laasya. */

#include <iostream>
using namespace std;
int main()
{
   int r,c,m;
   cin>>r>>c;
   int arr[r][c];
   int arrTemp[r][c];
   for(m=0;m<r;m++)
   {
       for(int j=0;j<c;j++)
       {
           cin>>arr[m][j];
           arrTemp[m][j]=0;
       }
   }
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           if(arr[i][j]==1)
           {
               for(int k=0;k<c;k++)
               arrTemp[i][k]=1;
               for(int k=0;k<r;k++)
               arrTemp[k][j]=1;
           }
       }
   }
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       {
           if(j==c-1)
          { cout<<arrTemp[i][j];
           break;
          }
       cout<<arrTemp[i][j]<<" ";
       }
       cout<<"\n";
   }
    return 0;
}
