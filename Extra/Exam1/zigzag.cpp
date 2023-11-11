#include <bits/stdc++.h>
using namespace std;
int main(){
	int cou=0,ans=0,b=0;
	int check=0;
	while (true) {
		int a; cin >> a;
		if (a<=0) break;
		if (b==0) {
			b = a;
			continue;
		}
		if (a%2 != b%2) {
			if (check==1) check = 0;
			else cou++;
		}
		else {
			cou = 0;
			check = 0;
		}
		ans = max(ans, cou);
		b = a;
	}
	cout << (ans+1)/2;
}
