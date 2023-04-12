/* You are given a directory tree of N directories/folders. Each directory is represented by a particular id which ranges from 1 to N. */

#include <stdio.h>
#include <stdlib.h>
#define pcx putchar_unlocked
#define gcx getchar_unlocked
typedef long int lint;
lint getnl() {
lint n =0; auto neg =0;
register int c = gcx();
if ('-' == c) { neg =1; c = gcx(); }
while(c<'0' || c>'9') c = gcx();
while(c>='0' && c<='9') {
n = n * 10 + c-'0';
c = gcx();
}
if(neg) n *= -1;
return n;
}
void putl(lint li,char lc) {
if (0 == li) {
pcx('0'); if(lc) pcx(lc); return;
}
char s[24]; lint idx =-1;
while (li) {
s[++idx] = '0' + li % 10;
li /= 10;
}
for (lint jdx=idx; jdx>=0; --jdx) pcx(s[jdx]);
if(lc) pcx(lc);
}
int main () {
 lint N = getnl();
 int PA[N+1];
 for (lint ni=1; ni<=N; ) PA[ni++] = getnl();
 lint D = getnl();
 int DA[D];
 char DLT [100001] ={0};
 for(lint ni=0; ni<D;) {
 DA[ni] = getnl(); DLT[DA[ni++]] =1;
 }
 if (DLT[1]) {
 putl(1, 0); return 0;
 }
 lint dLess =0;
 for (lint ni=0; ni<D; ) {
 //printf ("D:%d ", DA[ni]);
 lint pi = PA[DA[ni++]];
 char piv [100008]={0} ;
 while (pi>0) {
 if (piv[pi]) { ++dLess; /*printf ("C:%d", pi);*/ break; }
 else piv[pi] = 1;
 //putl(pi, ' ');
 if (DLT[pi]) { ++dLess; break; }
 pi = PA[pi];
 }
 //pcx('\n');
 }
 putl(D-dLess, 0);
return 0;
}
