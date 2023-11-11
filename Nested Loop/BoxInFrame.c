#include <stdio.h>
int main(){
	int n;
	scanf("%d" ,&n);
	for(int i=0;i<n;i++) printf("*");
	printf("\n*");
	for(int i=0;i<n-2;i++) printf(" ");
	printf("*\n");
	for(int i=0;i<n-4;i++) {
		printf("* ");
		for(int j=0;j<n-4;j++) printf("*");
		printf(" *\n");
	}
	printf("*");
	for(int i=0;i<n-2;i++) printf(" ");
	printf("*\n");
	for(int i=0;i<n;i++) printf("*");
}
