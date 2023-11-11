#include <stdio.h>
int main(){
	int n;
	scanf("%d" ,&n);
	int arr[n+1];
	for(int i=0;i<n;i++) scanf("%d" ,&arr[i]);
	int k; scanf("%d" ,&k);
	if (k>=0){
		for(int i=0;i<n;i++) printf("%d " ,arr[i]+k);
	}
	else {
		for(int i=n-1;i>=0;i--) printf("%d " ,arr[i]+k);
	}
}
