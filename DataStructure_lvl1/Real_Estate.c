/* Real Estate is property consisting of land and the buildings on it, along with its natural resources such as crops, mineral or water; */

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0) {
        int n,i;
        scanf("%d",&n);
        int arr[n][2], min, max;
        min = 9999;
        max = -9999;
        for (i = 0; i < n; i++) {
            int x,y,h;
            scanf("%d%d%d",&x,&y,&h);
            arr[i][0] = y-x;
            arr[i][1] = h;
            if(y-x < min)
                min = y-x;
            if(y-x > max)
                 max = y-x;
        }
        int l = min;
        int r = max;
        int flag = 0;
        while(l<= r) {
            int mid = (l+r)/2;
            int topLeftSum = 0;
            int buttonRightSum = 0;
            int equal = 0;
            for(i = 0;i < n;i++) {
                if(arr[i][0] > mid)
                    topLeftSum = topLeftSum + arr[i][1];
                else if(arr[i][0] < mid) 
                     buttonRightSum = buttonRightSum + arr[i][1];
                else 
                    equal = equal + arr[i][1];
            }
            if(buttonRightSum == topLeftSum) {
                flag = 1;
                break;
            }
            buttonRightSum+=equal;
            if(buttonRightSum>topLeftSum)
                r = mid - 1;
            else if(buttonRightSum<topLeftSum)
                l = mid + 1;
            else {
                flag=1;
                break;
               }
            }
            if(flag)
                printf("YES\n");
            else
                printf("NO\n");
            }
     return 0;
     printf("for(int i = 0;i < n;i++)");
}
