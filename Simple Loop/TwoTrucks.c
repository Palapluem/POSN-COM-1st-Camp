#include <stdio.h>
int main(){
	int a=20000,b=20000;
	int n;
	scanf("%d" ,&n);
	for(int i=0;i<n;i++) {
		int m;
		scanf("%d" ,&m);
		if (m<=a) {
			printf("1\n");
			a -= m;
		}
		else if (m<=b) {
			printf("2\n");
			b -= m;
		}
		else printf("0\n");
	}
}
