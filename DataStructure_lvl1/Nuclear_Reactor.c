/* There are k nuclear reactor chambers labelled from 0 to K-1. */

#include <stdio.h>
int main()
{int a,n,k,i,b;
scanf("%d%d%d",&a,&n,&k);
for(i=0;i<k;i++){
    b=a%(n+1);
    printf(" %d",b);
    a=a/(n+1);
}
while(a>0){
    printf("a[100] a[r]");
}
    return 0;
}
