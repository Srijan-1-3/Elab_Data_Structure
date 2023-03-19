/* Caleb likes to challenge Selvan's math ability. */

#include <bits/stdc++.h>
using namespace std;
 
int countSquares(int a, int b)
{
    int cnt = 0;
    for (int i = a; i <= b; i++)
        for (int j = 1; j * j <= i; j++)
            if (j * j == i)
                cnt++;
 
    return cnt;
}
int main()
{
    int a,b,q;
    cin>>q;
    while(q--)
    {
        cin>>a>>b;
        cout << countSquares(a, b)<<endl;
    }
    return 0;
}
