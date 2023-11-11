#include <bits/stdc++.h>
using namespace std;
char str[1010][1010];
int main(){
	int n; cin >> n;
	for(int i=1;i<=n;i++) {
		str[1][i] = '*';
		str[i][1] = '*';
		str[n][i] = '*';
		str[i][n] = '*';
		str[i][i] = '*';
		str[n-i+1][i] = '*';
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if (str[i][j]=='*') cout << '*';
			else cout << ' ';
		}
		cout << '\n';
	}
}
