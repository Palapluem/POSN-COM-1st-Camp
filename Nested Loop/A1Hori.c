#include <stdio.h>
int main(){
	int n;
	scanf("%d" ,&n);
	int w = (n+1)/2;
	for(int i=1;i<=n/2;i++) {
		for(int j=1;j<=i;j++) printf("A");
		for(int j=w-i;j>=1;j--) printf("1");
		printf("\n");
	}
	for(int i=1;i<=w;i++) printf("A");
	printf("\n");
	for(int i=1;i<=n/2;i++) {
		for(int j=w-i;j>=1;j--) printf("A");
		for(int j=1;j<=i;j++) printf("*");
		printf("\n");
	}
}
