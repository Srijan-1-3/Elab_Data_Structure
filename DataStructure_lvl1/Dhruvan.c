/* Dhruvan has planned a bicycle tour through the Western Ghats of Tamil Nadu */

#include <stdio.h>
int main()
{
    int T,t;
    scanf("%d",&T);
    for(t=0;t<T;t++){
        int n,i,peak=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                peak++;
            }
        }
        printf("%d\n",peak);
        
    }

    return 0;
}
