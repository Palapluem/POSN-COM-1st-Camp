#include <bits/stdc++.h>
using namespace std;
int arr[100001];
int cou,last,maxx,ans;
vector<int> vec;
int main(){
	int n,k; cin >> n >> k;
	while (k--) {
		int a; cin >> a;
		if (a<=0 || a>n) {
			continue;
		}
		arr[a] = true;
	}
	for(int i=1;i<=n;i++) {
		while (!arr[i] && i<=n) {
			i++;
			cou++;
			last = i;
		}
		if (cou>maxx) {
			vec.clear();
			vec.push_back(last-1);
			maxx = cou;
		}
		else if (cou==maxx) {
			vec.push_back(last-1);
		}
		cou=0, last=0;
	}
	cout << maxx << '\n';
	for(auto i:vec) cout << i << ' ';
}
