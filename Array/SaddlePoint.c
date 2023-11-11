#include <stdio.h>
int arr[1010][1010];
int main(){
	int cou=0;
	int m,n;
	scanf("%d %d" ,&m,&n);
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=n;j++) {
			scanf("%d" ,arr[i][j]);
		}
	}
	for(int i=1;i<=m;i++) {
		for(int j=1;j<=n;j++) {
			int now=arr[i][j];
			int check = 1;
			for(int a=1;a<=m;a++) {
				if (a==i) continue;
				if (arr[a][j]>arr[i][j]) check = 0;
			}
			for(int a=1;a<=n;a++) {
				if (a==j) continue;
				if (arr[i][a]<arr[i][j]) check = 0;
			}
			if (check) {
				printf("(%d, %d) = %d\n" ,i-1,j-1,arr[i][j]);
				cou++;
				continue;
			}
			check = 1;
			for(int a=1;a<=m;a++) {
				if (a==i) continue;
				if (arr[a][j]<arr[i][j]) check = 0;
			}
			for(int a=1;a<=n;a++) {
				if (a==j) continue;
				if (arr[i][a]>arr[i][j]) check = 0;
			}
			if (check) {
				printf("(%d, %d) = %d\n" ,i-1,j-1,arr[i][j]);
				cou++;
				continue;
			}
		}
	}
	if (cou==0) printf("None");
}
