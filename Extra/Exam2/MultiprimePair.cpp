#include <bits/stdc++.h>
using namespace std;
const int N = 100001;
bool notprime[N];
bool check[N+10];
vector<int> vec;
void solve(int n) {
	for(int i=n;i<=100000;i++) {
		if (check[i]) {
			cout << i  << '\n';
			return;
		}
	}
	cout << "100001" << '\n';
}
int main(){
	for(int i=2;i<=N;i++) {
		if (!notprime[i]) {
			vec.push_back(i);
			for(int j=i+i;j<=N;j+=i) {
				notprime[j] = true;
			}
		}
	}
	for(auto i:vec) {
		for(auto j:vec) {
			if (j>=i) continue;
			long long aa = 1ll*i*j;
			if (aa<=100000) {
				check[i*j] = true;
			}
		}
	}
	int n; cin >> n;
	while (n--) {
		int a; cin >> a;
		solve(a);
	}
}
