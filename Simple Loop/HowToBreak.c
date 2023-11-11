#include <stdio.h>
int main(){
	int n,cou=0;
	while (1) {
		scanf("%d" ,&n);
		if (!n) break;
		cou++;
	}
	printf("%d" ,cou);
}
