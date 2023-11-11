#include <stdio.h>
int arr[2500001];
int main(){
	int n;
	scanf("%d" ,&n);
	for(int i=1;i<=n;i++) {
		scanf("%d" ,&arr[i]);
	}
	int k,check=0;
	scanf("%d" ,&k);
	for(int i=1;i<=n;i++) {
		if (arr[i]==k) {
			printf("%d" ,i);
			check = 1;
		}
	}
	if (check==0) printf("0");
}
