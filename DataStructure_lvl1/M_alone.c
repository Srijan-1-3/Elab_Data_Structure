/* M is alone and he has an array a1, a2,..., an. */

# include<stdio.h>
# include<stdlib.h>
# include<math.h>
void input(long *,int);
int main()
{
 int n;
 
 scanf("%d",&n);
 long *ptr = (long*)malloc(n*sizeof(long));
 input(ptr,n);
return 0;
}
void input(long *ptr, int n)
{
 int i, j;
int m;
 for(i=0;i<n;i++)
{
scanf("%ld", ptr+i);
} 
 for(i = 0; i < n; i++)
{
if (*(ptr + i) <= m)
{
continue;
}
for (j = i + 1; j < n; j++)
{
int temp = *(ptr + i) & *(ptr + j);
if(temp > m)
{
m = temp;
}
}
}
printf("%d", m);
}
