#include <stdio.h>
#include <math.h>
int arr[101][101];
int main(){
	int n;
	scanf("%d" ,&n);
	long long sum=0;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			scanf("%d" ,&arr[i][j]);
		}
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			sum += abs(arr[i][j]-arr[j][i]);
		}
	}
	printf("%d" ,sum/2);
}
