#include <stdio.h>
int main(){
	int n,k;
	scanf("%d %d" ,&n,&k);
	int rub=0,jai=0;
	for(int i=0;i<n;i++) {
		int a,b; 
		scanf("%d %d" ,&a,&b);
		rub += a;
		jai += b;
	} 
	int profit=rub-jai;
	if (profit==0) printf("Breakeven\n");
	else if (profit>0) printf("Profit %d\n" ,profit);
	else printf("Loss %d\n" ,profit*-1);
	if (profit>=k) printf("Expand\n");
	else if (profit<k/2) printf("Not expand\n");
	else {
		printf("Wait and see\n");	
		rub=0,jai=0;
		for(int i=0;i<n;i++) {
			int a,b;
			scanf("%d %d" ,&a,&b);
			rub += a;
			jai += b;
		}
		profit=rub-jai;
		if (profit==0) printf("Breakeven\n");
		else if (profit>0) printf("Profit %d\n" ,profit);
		else printf("Loss %d\n" ,profit*-1);
		if (profit>=k) printf("Expand\n");
		else if (profit<k/2) printf("Not expand\n");
	}
}
