#include <stdio.h>
int main(){
	int n;
	scanf("%d" ,&n);
	int a=1,sum=1;
	for(int i=n-1;i>=1;i-=2) {
		a += i+i;
		sum += a;
		if (i>1) {
			a += i+i;
			sum += a;
		}
	}
	printf("%d" ,sum);
}
