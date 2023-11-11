#include <stdio.h>
#include <math.h>
int main(){
	int x;
	scanf("%d" ,&x);
	int minn=2e9,ans;
	for(int i=0;i<8;i++) {
		int n;
		scanf("%d" ,&n);
		if (abs(n-x)<minn) {
			ans = n;
			minn = abs(n-x);
		}
	}
	printf("%d" ,ans);
}
