#include <stdio.h>
int main(){
	int n,k,ans=0;
	scanf("%d %d" ,&n,&k);
	for(int i=0;i<n;i++) {
		int a,b,c;
		scanf("%d %d %d" ,&a,&b,&c);
		int cou=0;
		if (a>=8) cou++;
		if (b>=8) cou++;
		if (c>=8) cou++;
		if (cou>=2 && ans<=k) {
			printf("Yes\n");
			ans++;
		}
		else printf("No\n");
	}
	printf("%d" ,ans);
}
