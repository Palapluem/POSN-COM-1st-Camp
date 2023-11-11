#include <stdio.h>
int stamp,price_stamp,price;
int main(){
	int id1,id2,id3,v1,v2,v3,n,k;
	scanf("%d %d" ,&id1,&v1);
	scanf("%d %d" ,&id2,&v2);
	scanf("%d %d" ,&id3,&v3);
	scanf("%d %d" ,&n,&k);
	for(int i=0;i<n;i++) {
		int id,p;
		scanf("%d %d" ,&id,&p);
		if (id==id1) {
			price_stamp += p;
			stamp += v1;
		}
		if (id==id2) {
			price_stamp += p;
			stamp += v2;
		}
		if (id==id3) {
			price_stamp += p;
			stamp += v3;
		}
		price += p;
	}
	stamp += (price-price_stamp)/k;
	printf("%d\n%d\n%d",price,price-price_stamp,stamp);
}
