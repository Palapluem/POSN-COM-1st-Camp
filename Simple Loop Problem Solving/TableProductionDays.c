#include <stdio.h>
int main(){
	int a,b,m,n;
	scanf("%d %d %d %d" ,&a,&b,&m,&n);
	if ((!a && m) || (!b && n)) {
		printf("Unable to finish order");
	}
	else {
		a *= 6; 
		b *= 10;
		if (!a && !b) printf("0");
		else if (!a) printf("%d" ,(n+b-1)/b);
		else if (!b) printf("%d" ,(m+a-1)/a);
		else {
			if ((m+a-1)/a > (n+b-1)/b) printf("%d" ,(m+a-1)/a);
			else printf("%d" ,(n+b-1)/b);
		}
	}
}
