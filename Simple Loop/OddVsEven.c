#include <stdio.h>
int odd,even;
int main(){
	for(int i=0;i<8;i++) {
		int n;
		scanf("%d" ,&n);
		if (n%2) odd += n;
		else even += n;
	}
	if (odd==even) printf("equal\n");
	else if (odd>even) printf("odd\n");
	else printf("even\n");
	printf("%d\n%d" ,even,odd);
}
