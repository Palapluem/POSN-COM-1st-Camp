#include <stdio.h>
int a,b,c,cou1,cou2,temp;
int main(){
	while (1) {
		scanf("%d" ,&c);
		if (!c) break;
		if (a && b && c) {
			if (a<b && b>c) cou1++;
			else if (a>b && b<c) cou2++;
		}
		a = b;
		b = c;
	}
	printf("%d\n%d" ,cou1,cou2);
}
