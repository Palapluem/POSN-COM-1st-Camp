#include <stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d" ,&a,&b,&c,&d);
	float avg=0.0;
	for(int i=0;i<8;i++) {
		int n,grade;
		scanf("%d" ,&a);
		if (n>=a) grade = 4;
		else if (n>=b) grade = 3;
		else if (n>=c) grade = 2;
		else if (n>=d) grade = 1;
		else grade = 0;
		printf("%d\n" ,grade);
		avg += grade;
	}
	printf("%6.f" ,avg/8.0);
}
