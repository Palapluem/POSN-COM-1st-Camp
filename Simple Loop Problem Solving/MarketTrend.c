#include <stdio.h>
int main(){
	int cou=0,maxx=0;
	int n;
	scanf("%d" ,&n);
	int temp=0;
	for(int i=0;i<n;i++) {
		int a;
		scanf("%d" ,&a);
		if (a>temp) cou++;
		else cou = 0;
		if (cou>maxx) maxx = cou;
		temp = a;
	}
	if (maxx==1) printf("No value increase");
	else printf("%d" ,maxx);
}
