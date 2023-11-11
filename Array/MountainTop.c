#include <stdio.h>
int arr[1010][1010];
int main(){
	int n;
	scanf("%d" ,&n);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			scanf("%d" ,&arr[i][j]);
		}
	}
	int cou=0;
	for(int i=2;i<n;i++) {
		for(int j=2;j<n;j++) {
			int check = 0;
			for(int a=i-1;a<=i+1;a++) {
				for(int b=j-1;b<=j+1;b++) {
					if (a==i && b==j) continue;
					if (arr[i][j]<=arr[a][b]) {
						check = 1;
						break;
					}
				}
				if (check) break;
			}
			if (!check) cou++;
		}
	}
	printf("%d\n" ,cou);
	for(int i=2;i<n;i++) {
		for(int j=2;j<n;j++) {
			int check = 0;
			for(int a=i-1;a<=i+1;a++) {
				for(int b=j-1;b<=j+1;b++) {
					if (a==i && b==j) continue;
					if (arr[i][j]<=arr[a][b]) {
						check = 1;
						break;
					}
				}
				if (check) break;
			}
			if (!check) {
				printf("%d %d %d\n" ,arr[i][j],i-1,j-1);
			}
		}
	}
}
