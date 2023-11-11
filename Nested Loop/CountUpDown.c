#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int temp=1;
	for(int i=1;i<=n;i++) {
		int a; cin >> a;
		if (abs(temp-a)>10) {
			cout << temp << " . . . " << a;
		}
		else if (a>temp){
			for(int j=temp;j<=a;j++) cout << j << ' ';
		}
		else {
			for(int j=temp;j>=a;j--) cout << j << ' ';
		}
		cout << '\n';
		temp = a;
	}
}
/*
5
13 2 3 20 14
*/
