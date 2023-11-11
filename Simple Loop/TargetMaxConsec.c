#include <stdio.h>
int main(){
	int x;
	scanf("%d" ,&x);
	int n,last=0,cou=0,counow=0,coumax=0;
	while (1) {
		scanf("%d" ,&n);
		if (n==0) break;
		if (n==x) cou++;
		if (n==last && n==x) {
			counow++;
		}
		else if (n==x) {
			counow=1;
		}
		if (counow>coumax) {
			coumax = counow;
		}
		last = n;
	}
	printf("%d\n%d" ,coumax,cou);
}
