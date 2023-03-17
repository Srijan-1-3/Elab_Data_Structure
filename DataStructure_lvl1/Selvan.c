/* Selvan studies, engineering as per his father's wishes, while Aaron, whose family is poor, studies engineering to improve his family's financial situation. */

#include<stdio.h>

void printArray(int arr[],int n)
{
  int i;
  for(i=0; i<n; i++)
  {
   printf("%d ",arr[i]);
  }
  printf("\n");
}
void insertionSort(int arr[],int n)
{
  int step, i;
  for(step=1; step<n; step++)
  {
   int key = arr[step];
   int j=step-1;
   while(key<arr[j] && j>=0)
   {
     arr[j+1] = arr[j];
     --j;
   }
   arr[j+1]=key;
   if(step==2)
   {
     for(i=0;i<n;i++)
       printf("%d ",arr[i]);
   }
  }
  printf("\n");
}

int main()
{
  int arr[30], i, n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  insertionSort(arr, n);
  printArray(arr, n);
  return 0;
}
