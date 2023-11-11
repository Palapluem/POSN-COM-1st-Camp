#include <stdio.h>
int main(){
	int n;
	scanf("%d" ,&n);
	while (n--) {
		char str[40];
		scanf("%s" ,str); 
		int w=0,d=0,l=0;
		for(int i=0;i<38;i++) {
			if (str[i]=='W') w++;
			else if (str[i]=='D') d++;
			else if (str[i]=='L') l++;
		}
		printf("%d %d %d %d %d %d\n" ,w,d,l,(w*2)+d,(w*3)+d,(w*5)+d-l);
	}
}

