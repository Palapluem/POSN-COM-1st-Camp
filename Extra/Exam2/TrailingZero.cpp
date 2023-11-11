#include <bits/stdc++.h>
using namespace std;
static int solve(int n) {
	int number = 0;
	while (n>0) {
		number += n/5;
		n /= 5;
	}
	return number;
}
int main(){
	int n; 
	scanf("%d" ,&n);
	printf("%d" ,solve(n));
}
