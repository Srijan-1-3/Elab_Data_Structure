/* Mr. Alex just installed new bands in his feet and they do not feel like they should, making it where he cannot stop! */

#include <stdio.h>
int main()
{int LEN=3;
 float m,d;
 char var[3][LEN];
 char inp[3][LEN];
 scanf("%c%c%f\n%c%c%f",&inp[0][1],&inp[1][0],&m,&var[0][0],&var[1][1],&d);
 printf("x %.2f",(m/(-d)));
	return 0;
}
