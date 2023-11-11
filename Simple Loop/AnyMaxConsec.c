#include <stdio.h>
int main(){
	int n;
	int cou=0,last=0,coumax=0,ans=0;
	while (1) {
		scanf("%d" ,&n);
		if (!n) break;
		if (n==last) {
			cou++;
			if (cou>coumax) {
				coumax = cou;
				ans = n;	
			}
		}
		else {
			cou = 1;
			last = n;
			if (cou>coumax) {
				coumax = cou;
				ans = n;	
			}
		}
	}
	printf("%d\n%d" ,coumax,ans);
}
