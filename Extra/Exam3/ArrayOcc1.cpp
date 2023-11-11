#include <bits/stdc++.h>
using namespace std;
int success, invalid, before, maxx=INT_MIN, arr[100010];
vector<int> vec;
int main(){
	int n,k; cin >> n >> k;
	while (k--) {
		int a; cin >> a;
		if (a<=0 || a>n) {
			invalid++;
			continue;
		}
		else if (arr[a]==0) {
			success++;
		}
		else if (arr[a]!=0) {
			before++;
		}
		arr[a]++;
	}
	for(int i=1;i<=n;i++) {
		if (arr[i]>maxx) {
			vec.clear();
			vec.push_back(i);
			maxx = arr[i];
		}
		else if (arr[i]==maxx) {
			vec.push_back(i);
		}
	}
	cout << success << '\n' << invalid << '\n' << before << '\n';
	for(auto i:vec) cout << i << ' ';
}
