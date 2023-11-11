#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d" ,&n);
	int prime = 1;
	if (n==2) {
		printf("%d is prime\n" ,n);
		return 0;
	}
	for(int i=2;i<=sqrt(n)+1;i++) {
  		if (n%i==0) {
  		  prime = 0;
  		  break;
  		}
  	}
  	if (n==1 || n==0) prime = 0;
  	if (prime) printf("%d is prime\n" ,n);
  	else printf("%d is not prime\n" ,n);
}

