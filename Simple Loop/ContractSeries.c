#include <stdio.h>
int main(){
	int a,b,x,y,ans=0;
	scanf("%d %d" ,&x,&y);
	for(a=3,b=1;a<=x&&b<=y;) {
		ans += a*b;
		int temp = a;
		a = a+b;
		b = temp-b;
	}
	printf("%d" ,ans);
}
