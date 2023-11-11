#include <stdio.h>
int main(){
	int n;
	scanf("%d" ,&n);
	int h=(n+1)/2;
	int c=0;
	for(int i=0;i<h;i++) {
		for(int j=0;j<c;j++) printf("1");
		for(int j=0;j<n-c-c;j++) printf("A");
		for(int j=0;j<c;j++) printf("*");
		printf("\n");
		c++;
	}
}
