/* Kkalaiselvan is going to behave as a vehicle driver. */

#include <stdio.h>
void sort(int a[],int n)
{int t,i,j;
for(i=0;i<n-1;i++)
for(j=0;j<n-i-1;j++)
if(a[i]>a[i+1]){t=a[i];
a[i]=a[i+1]; a[i+1]=t;}}

int main()
{int A[100],T,K,N,check=0,i;
scanf("%d",&T);
while(T--)
{int temp,temp2=0;
check=0;
scanf("%d",&N);
scanf("%d",&K);
for(i=0;i<N;i++)
{scanf("%d",&A[i]);} sort(A,N);
for(i=0;i<N;i++)
if(A[i]>=K)
{
temp= A[i]-K;
K+=temp;
temp2+= temp;
check=1;
}
if(check==0)
printf("-1");
else
printf("%d",temp2);
printf("\n");
}
    return 0;
}
