#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> a(n),b(n);
	for(auto &i:a) cin >> i;
	for(auto &i:b) cin >> i;
	long long sum=0;
	for(int i=0;i<n;i++) {
		sum += a[i]*b[i];
	}
	cout << sum;
}
