#include <stdio.h>
int main(){
	int n,a=1,b=1,c=1;
	scanf("%d" ,&n);
	for(int i=0;i<n;i++) {
		int x;
		scanf("%d" ,&x);
		if (a<=b && a<=c) {
			printf("A\n");
			a += x;
		}
		else if (b<=a && b<=c) {
			printf("B\n");
			b += x;
		}
		else if (c<=a && c<=b) {
			printf("C\n");
			c += x;
		}
	}
}
