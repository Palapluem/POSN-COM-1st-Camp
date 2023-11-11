#include <bits/stdc++.h>
using namespace std;
const int N = 6000001;
int cou=0;
bool arr[N];
int main(){
	int n; cin >> n;
	for(int i=2;i<=n;i++) {
		if (!arr[i]) {
			for(int j=i+i;j<=n;j+=i) {
				arr[j] = true;
			}
		}	
	}
	for(int i=2;i<=n;i++) {
		if (!arr[i]) cou++;
	}
	cout << cou;
}
