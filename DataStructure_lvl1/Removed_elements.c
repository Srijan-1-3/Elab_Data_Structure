/* You are given a list consisting of n integers. Your task is to remove elements from the list at given positions, and report the removed elements. */

#include <stdio.h>
#define N 200000
#define N_ (1 << 18)
int tr[N_ * 2];
void build(int k,int l,int r) {
 tr[k] = r - l;
 if (r - l > 1) {
 int m = (l + r) / 2;

 build(k * 2 + 1, l, m);
 build(k * 2 + 2, m, r);
 }
}
int query(int k, int l, int r, int x) {
 int m, k1, k2;

 tr[k]--;
 if (r - l == 1)
 return r;
 m = (l + r) / 2, k1 = k * 2 + 1, k2 = k * 2 + 2;
 return tr[k1] >= x ? query(k1, l, m, x) : query(k2, m, r, x - tr[k1]);
}
int main() {

 int n, h, i, x;

 scanf("%d", &n);
 int aa[n];
 for (i = 0; i < n; i++)
 scanf("%d", &aa[i]);
 build(0, 0, n);
 for (h = 0; h < n; h++) {
 scanf("%d", &x);
 i = query(0, 0, n, x) - 1;
 printf("%d ", aa[i]);
 }
 printf("\n");
 return 0;
}
