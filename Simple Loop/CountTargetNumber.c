#include <stdio.h>
int main(){
	int x;
	scanf("%d" ,&x);
	int n,ans=0;
	while (1) {
		scanf("%d" ,&n);
		if (!n) break;
		if (n==x) ans++;
	}
	if (!ans) printf("None");
	else printf("%d" ,ans);
}
