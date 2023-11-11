#include <stdio.h>
int n1,n2,n3;
int cou1,cou2,cou3;
int main(){
	int n;
	scanf("%d" ,&n);
	for(int i=0;i<n;i++) {
		int x,y,z; 
		scanf("%d %d %d" ,&x,&y,&z);
		if (x<y) {int temp=x;x=y,y=temp;}
		if (y<z) {int temp=y;y=z,z=temp;}
		if (x<y) {int temp=x;x=y,y=temp;}
		if (x>50 || y>40 || z>20) printf("Oversize product\n");
		else if (x>25 || y>15 || z>12) {
			printf("3\n");
			cou3++;
			n3 += 40000 - (x*y*z);
		}
		else if (x>15 || y>10 || z>8) {
			printf("2\n");
			cou2++;
			n2 += 4500 - (x*y*z);
		}
		else {
			printf("1\n");
			cou1++;
			n1 += 1200 - (x*y*z);
		}
	}
	printf("%d %d\n%d %d\n%d %d" ,cou1,n1,cou2,n2,cou3,n3);
}
