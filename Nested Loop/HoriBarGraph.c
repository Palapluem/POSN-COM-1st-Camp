#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while (cin >> n) {
		if (n<=0) break;
		else {
			while (n--) {
				cout << '*';
			}
			cout << '\n';
		}
	}
}
