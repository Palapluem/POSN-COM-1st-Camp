#include <stdio.h>
int x,y,a,cou,none=0;
int main(){
	scanf("%d %d" ,&x,&y);
	if (x>y) {
		int temp = x;
		x = y;
		y = temp;
	}
	for(int i=0;i<8;i++){
		scanf("%d" ,&a);
		if (a>=x && a<=y) {
			cou++;
			none = 1;
		}
	}
	if (none==0) printf("None");
	else printf("%d" ,cou);
}
