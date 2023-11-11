#include <stdio.h>
int arr[11];
int main(){
	int n;
	scanf("%d" ,&n);
	for(int i=1;i<=n;i++) {
		scanf("%d" ,&arr[i]);
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<=i;j++) {
			printf("%d" ,arr[n-i]);
		}
		printf("\n");
	}
}
