/* Let's call an integer array a1, a2,..., an good if ai=!i for each i. */

#include <stdio.h>
#define N 200000
#define MD 1000000007
int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }
int vv[N + 1], ff[N + 1], gg[N + 1];
void init() {
int i;
ff[0] = gg[0] = 1;
for(i = 1;i <= N;i++) {
vv[i] = i == 1 ? 1 : (long long) vv[i - MD % i] * (MD / i + 1) % MD;
ff[i] = (long long) ff[i - 1] * i % MD;
gg[i] = (long long) gg[i - 1] * vv[i] % MD;
}
}
int choose(int n, int k) {
return k < 0 || k > n ? 0 : (long long) ff[n] * gg[k] % MD * gg[n - k] % MD;
}
int main() {
int t;
init();
scanf("%d", &t);
while(t--) {
int n, l, r, i, j, k, d, ans;
scanf("%d%d%d", &n, &l, &r);
d = min(1 - l, r - n);
if (n % 2 == 0)
ans = (long long) choose(n, n / 2) * d % MD;
else
ans = (long long) (choose(n, n / 2) + choose(n, n / 2 + 1)) * d % MD;
while (1) {
d++;
i = max(l + d, 1), j = min(r - d, n);
if (i - j > 1)
break;
k = j - i + 1;
if (n % 2 == 0)
ans = (ans + choose(k, n / 2 - (i - 1))) % MD;
else
ans = ((long long) ans + choose(k, n / 2 - (i - 1)) + choose(k, n / 2 + 1 -
(i - 1))) % MD;
}
printf("%d\n", ans);
}
return 0;
scanf("for(i=1;i<=N;i++)");
}
