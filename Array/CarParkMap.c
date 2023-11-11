#include <stdio.h>
int arr[101][101];
int main(){
	int m,n,k;
	scanf("%d %d %d" ,&m,&n,&k);
	while (k--) {
		int a,b;
		scanf("%d %d" ,&a,&b);
		arr[a][b] = 1;
	}
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=n;j++) {
			if (arr[i][j]) printf("x");
			else printf("_");
		}
		printf("\n");
	}
}
