#include <stdio.h>
int arr[101][101];
int main() {
	int r,c,k;
	scanf("%d %d %d" ,&r,&c,&k);
	for(int i=1;i<=k;i++) {
		int a,b;
		scanf("%d %d" ,&a,&b);
		arr[a][b] = i;
	}
	for(int i=1;i<=r;i++) {
		for(int j=1;j<=c;j++) {
			printf("%d " ,arr[i][j]);
		}
		printf("\n");
	}
}
