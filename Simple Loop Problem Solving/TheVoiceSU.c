#include <stdio.h>
int cou1,cou2;
int main(){
	int n,k;
	scanf("%d %d" ,&n,&k);
	for(int i=1;i<=n;i++) {
		int m,a,b;
		scanf("%d %d %d" ,&m,&a,&b);
		if (a>=9 && b>=9) {
			if (m==1) {
				if (cou1<k) {
					cou1++;
					printf("%d %d\n" ,i,1);
				}
				else if (cou2<k) {
					cou2++;
					printf("%d %d\n" ,i,2);
				}
					
			}
			else if (m==2) {
				if (cou2<k) {
					cou2++;
					printf("%d %d\n" ,i,2);
				}
				else if (cou1<k) {
					cou1++;
					printf("%d %d\n" ,i,1);	
				}
			}
		}
		else if (a>=9) {
			if (cou1<k) {
				cou1++;
				printf("%d %d\n" ,i,1);
			}
		}
		else if (b>=9) {
			if (cou2<k) {
				cou2++;
				printf("%d %d\n" ,i,2);
			}
		}
	}
}
