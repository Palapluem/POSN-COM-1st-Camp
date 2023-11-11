#include <stdio.h>
int t,n,m,x,y,cou1,cou2;
int main(){
	while (scanf("%d" ,&t)) {
		if (!t) break;
		else if (t==1) {
			scanf("%d" ,&n);
			x += n;
			cou1++;
		}
		else if (t==2) {
			scanf("%d" ,&n);
			y += n;
			cou2++;
		}
	}
	printf("%d %d\n%d %d %d" ,cou1,cou2,x,y,x-y);
}
