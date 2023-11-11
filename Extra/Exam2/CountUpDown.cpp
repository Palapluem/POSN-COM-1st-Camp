#include <bits/stdc++.h>
using namespace std;
void print(int a,int b) {
	if (abs(a-b)<=10) {
		if (a<b) {
			for(int i=a;i<=b;i++) {
				cout << i << ' ';
			}
		}
		else {
			for(int i=a;i>=b;i--) {
				cout << i << ' ';
			}
		}
		cout << '\n';
	}
	else {
		if (a<b) {
			cout << a << ' ' << a+1 << ' ' << a+2 << " . . . " << b-2 << ' ' << b-1 << ' ' << b << '\n';
		}
		else {
			cout << a << ' ' << a-1 << ' ' << a-2 << " . . . " << b+2 << ' ' << b+1 << ' ' << b << '\n';
		}
	}
}
int main(){
	int n; cin >> n;
	int last=1;
	while (n--) {
		int a; cin >> a;
		print(last, a);
		last = a;
	}
}
