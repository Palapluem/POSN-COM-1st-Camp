#include <stdio.h>
int main(){
	int n;
	scanf("%d" ,&n);
	for(int i=n;i>=1;i--) {
		for(int j=n;j>i;j--) printf(" ");
		for(int j=1;j<=i;j++) printf("%d" ,i%10);
		printf("\n");
	}
}
