#include <stdio.h>
int main(){
	int n,n1,n2,n3;
	scanf("%d" ,&n);
	scanf("%d %d %d" ,&n1,&n2,&n3);
	for(int i=0;i<n;i++) {
		int x,y,z;
		scanf("%d %d %d" ,&x,&y,&z);
		if (x<y) {int temp=x;x=y,y=temp;}
		if (y<z) {int temp=y;y=z,z=temp;}
		if (x<y) {int temp=x;x=y,y=temp;}
		if (x>50 || y>40 || z>20) printf("Oversize product\n");
		else if (x>25 || y>15 || z>12) {
			if (n3==0) printf("Box not available\n");
			else {
				printf("3\n");
				n3--;
			}
		}
		else if (x>15 || y>10 || z>8) {
			if (n2==0) {
				if (n3==0) printf("Box not available\n");
				else {
					printf("3\n");
					n3--;
				}
			}
			else {
				printf("2\n");
				n2--;
			}
		}
		else {
			if (n1==0) {
				if (n2==0) {
					if (n3==0) printf("Box not available\n");
					else {
						printf("3\n");
						n3--;
					}
				}
				else {
					printf("2\n");
					n2--;
				}
			}
			else {
				printf("1\n");
				n1--;
			}
		}
	}
}
