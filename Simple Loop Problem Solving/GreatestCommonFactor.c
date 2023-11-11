#include <stdio.h>
#include <math.h>
int gcd(int a,int b) {
	if (a<b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (a%b==0) return b;
	else return gcd(b, a%b);
}
int main(){
	int a,b,c;
	scanf("%d %d %d" ,&a,&b,&c);
	printf("%d" ,gcd(a, gcd(b,c)));
}
