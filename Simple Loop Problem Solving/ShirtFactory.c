#include <stdio.h>
int main(){
	int x;
	scanf("%d" ,&x);
	int cou=0,price=0;
	for(int i=0;i<7;i++) {
		int a;
		scanf("%d" ,&a);
		cou += a;
	}
	if (cou>=250) {
		price = 18500 + (cou-250)*60;
	}
	else if (cou>=100) {
		price = 8000 + (cou-100)*70;
	}
	else {
		price = cou*80;
	}
	int sell=cou*x;
	printf("%d\n%d\n" ,price,sell);
	int profit = sell-price;
	if (profit>0) printf("Profit %d" ,profit);
	else printf("No Profit");
}
