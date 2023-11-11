#include <stdio.h>
int main() {
	for(int i=0;i<7;i++) {
		int n,m;
		scanf("%d %d" ,&n,&m);
		int tea;
		if (n/250<m/15) tea = n/250;
		else tea = m/15;
		printf("%d " ,tea);
		if (n>tea*250) printf("water");
		printf("\n");
	}
}
