#include <stdio.h>
int arr[10010];
int main(){
	int nowPos=0;
	while (1) {
		int n;
		scanf("%d" ,&n);
		if (!n) break;
		arr[nowPos++] = n;
	}
	for(int i=nowPos-1;i>=0;i--) {
		printf("%d " ,arr[i]);
	}
}
