#include <bits/stdc++.h>
using namespace std;
struct d{
	string name;
	int all;
};
int main(){
	int n,m; cin >> n >> m;
	vector<d> vec(n);
	int maxx=INT_MIN;
	for(auto &i:vec) {
		cin >> i.name;
		int minn=INT_MAX;
		for(int j=1;j<=m;j++) {
			int a; cin >> a;
			i.all += a;
			minn = min(minn, a);
		}
		i.all -= minn;
		maxx = max(maxx, i.all);
	}
	cout << maxx << '\n';
	for(auto i:vec) {
		if (i.all==maxx) {
			cout << i.name << '\n';
		}
	}
}
