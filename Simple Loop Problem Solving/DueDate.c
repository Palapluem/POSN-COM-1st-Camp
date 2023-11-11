#include <stdio.h>
int main(){
	int n,k;
	scanf("%d %d" ,&n,&k);
	int eachDay=100*k,now=0;
	for(int i=0;i<n;i++) {
		int a;
		scanf("%d" ,&a);
		now += a;
		printf("%d\n" ,(now+eachDay-1)/eachDay);
	}
	
}
