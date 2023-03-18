/* Simon is studying B-Tech- Mechanical Engineering. */

#include <stdio.h>
#include <limits.h>
int main()
{
    int i,n,arr1[100],max,elem;
    scanf("%d",&n);
    for(i= 0;i< n;i++)
    {
    scanf("%d",&arr1[i]);
    }
    max=INT_MIN;
    int arr2[100]={0};
    for(i=0;i<n;i++)
    {
    if(arr2[arr1[i]]==0)
    {
        arr2[arr1[i]]=1;
    }
    else{
        arr2[arr1[i]]++;
    if(arr2[arr1[i]]>max)
    {
        elem=arr1[i];
        max=arr2[arr1[i]];

    }
    }
    }
    printf("%d",elem);
    return 0;
}
