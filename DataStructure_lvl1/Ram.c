/* Ram has provide input two numbers 'p' and 'q' to Sakthi. */

#include <bits/stdc++.h>
using namespace std;
void ss(){
 cout<<"while(top<=bottom && right>=left)";
}
void fill0X(int m, int n){
 int i, k = 0, l = 0,r = m, c = n;
 char a[m][n], x = 'Y';
 while (k < m && l < n) {
 for (i = l; i < n; ++i)
 a[k][i] = x;
 k++,i=k;
 while(i < m)
 a[i][n-1] = x,i++;
 n--;
 if (k < m)
 for (i = n; i >= l; --i)
 a[m-1][i] = x;
 m--;
 if (l < n)
 for (i = m; i >= k; --i)
 a[i][l] = x;
 l++;
 x = (x == '0')? 'Y': '0';
 }
 for (i = 0; i < r; i++) {
 for (int j = 0; j < c; j++) {
 cout << a[i][j];
 if(j < c-1)
 cout<<" ";
 }
 cout <<"\n";
 }
}
int main()
{
 int m,n;
 cin>>m>>n;
 fill0X(m, n);
}
