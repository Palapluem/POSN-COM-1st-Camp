#include <stdio.h>
int main(){
	int m,n,a=0,b=0;
	scanf("%d %d" ,&m,&n);
	for(int i=1;i<=m;i+=2) {
		if (i%8==1 || i%8==5) a += i;
		else a -= i;
	}
	int check=0;
	for(int i=1;i<=n;i*=2) {
		if (check) b -= i;
		else b += i;
		check != check;
	}
	printf("%d" ,a*b);
}
