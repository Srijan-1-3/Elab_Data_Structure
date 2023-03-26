/* Your task is to construct a tower in N days by following some conditions. */

#include<stdio.h>
int main()
{
    long int disk,temp[1000000]={0},size,i,max;
    scanf("%ld",&disk);
    max=disk;
    for(i=0;i<disk;i++)
    {
        scanf("%ld",&size);
        temp[size]=size;
        if(size==max)
        {
            while(temp[size])
            {
                printf("%ld ",temp[size]);
                size--;
            }
            max=size;
            printf("\n");
        }
        else
          printf("\n");
    }
    return 0;
}
