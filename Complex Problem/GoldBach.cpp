#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	while (cin >> n) {
		if (!n) break;
		printf("Y %lld\n" ,n*n-n+1);
	}	
}
