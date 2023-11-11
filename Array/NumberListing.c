#include <stdio.h>
int arr[10010];
int main(){
	int n;
	scanf("%d" ,&n);
	for(int i=0;i<n;i++) {
		int a;
		scanf("%d" ,&a);
		arr[a]++;
	}
	for(int i=1;i<=10000;i++) {
		if (arr[i]>0) {
			printf("%d " ,i);
		}
	}
}
