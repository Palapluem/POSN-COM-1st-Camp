#include <stdio.h>
#include <math.h>
int main(){
	int r,c,dis,n,ans=0;
	scanf("%d %d %d %d" ,&r,&c,&dis,&n);
	for(int i=0;i<n;i++) {
		int a,b;
		scanf("%d %d" ,&a,&b);
		int diss = abs(r-a)+abs(c-b);
		if (diss<=dis) ans++;
	}
	printf("%d" ,ans);
}
