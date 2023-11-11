#include <stdio.h>
int arr[101];
int main(){
	int n,k;
	scanf("%d %d" ,&n,&k);
	for(int i=0;i<k;i++) {
		int a;
		scanf("%d" ,&a);
		arr[a]++;
	}
	int maxx=0,coumax=2000000000;
	for(int i=1;i<=n;i++) {
		if (arr[i]>coumax) {
			maxx = i;
			coumax = arr[i];
		}
	}
	printf("%d\n%d" ,maxx,coumax);
}
