/* You own a club on eerie planet. The day on this planet comprises of H hours. */

#include<stdio.h>
int main()
{
  long long int i,j,t,H,C,height,Q,S[100000],E[100000],h[100000];
  long long int nc=0,val=0,flag=0,maximum_height=0;
  scanf("%lld%lld%lld",&H,&C,&Q);
  
  for(i=0;i<C;i++)
  {
    scanf("%lld%lld%lld",&h[i],&S[i],&E[i]);
    if(h[i]>maximum_height)
     maximum_height=h[i];
  }

  for(i=0;i<Q;i++)
  {
    scanf("%lld%lld",&height,&t);
    if(height>maximum_height)
      printf("YES\n");
    else{
    val=0;
    nc=0;
    flag=0;
    for(j=0;j<C;j++)
    { 
      if(t>=S[j] && t<=E[j])
      {
        nc++;
        if(height<=h[j])
        {
          printf("NO\n");
          flag=1;
          break;
        }
        else 
         val++;
      } 
    }
  
    if(nc==val)
        printf("YES\n");
    else
      if(flag==0)
        printf("NO\n");
    }
    
  }
  return 0; 
  printf("void enqueue(long long h,long long start,long long end) while(c--)");
}
