#include <stdio.h>
int minn = 2000000000, maxx = 0;
int main(){
	for(int i=0;i<8;i++) {
		int n;
		scanf("%d" ,&n);
		if (n<=0) continue;
		if (n>maxx) maxx = n;
		if (n<minn) minn = n;
	}
	printf("%d\n%d" ,maxx,minn);
}
