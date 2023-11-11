#include <stdio.h>
int gcd(int a,int b) {
	if (a<b) {
		int temp = a;
		a = b;
		b = temp;
	}
	if (a%b==0) return b;
	else return gcd(b, a%b);
}
long long lcm(int a,int b) {
	return (a*b) / gcd(a,b);
}
int main(){
	int a,b,c;
	scanf("%d %d %d" ,&a,&b,&c);
	printf("%d" ,lcm(a, lcm(b,c)));
}
