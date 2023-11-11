#include <stdio.h>
int main(){
	int x,y,sum=0;
	scanf("%d %d" ,&x,&y);
	int check = 0;
	for(int i=0;i<8;i++) {
		int n;
		scanf("%d" ,&n);
		if (x<=n && n<=y) {
			sum += n;
			check = 1;
		}
	}
	if (check) printf("%d" ,sum);
	else printf("None");
}
