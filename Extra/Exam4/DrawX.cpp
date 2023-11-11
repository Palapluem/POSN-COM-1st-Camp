#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	if (n%2==0) {
		printf("error %d is not odd number" ,n);
		return 0;
	}
	for(int i=1;i<=n;i++) cout << '-';
	cout << '\n';
	for(int i=0;i<n/2;i++) {
		for(int j=0;j<i;j++) cout << ' ';
		cout << '\\';
		for(int j=0;j<n-i-i-2;j++) cout << ' ';
		cout << '/' << '\n';
	}
	for(int i=0;i<n/2;i++) cout << ' ';
	cout << 'X' << '\n';
	for(int i=n/2-1;i>=0;i--) {
		for(int j=0;j<i;j++) cout << ' ';
		cout << '/';
		for(int j=0;j<n-i-i-2;j++) cout << ' ';
		cout << '\\' << '\n';
	}
	for(int i=1;i<=n;i++) cout << '-';
}
