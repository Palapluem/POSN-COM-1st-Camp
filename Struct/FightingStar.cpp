#include <bits/stdc++.h>
using namespace std;
struct d{
	string name;
	int point;
};
int main(){
	vector<d> vec(8);
	for(auto &i:vec) {
		cin >> i.name;
		i.point = 0;
	}
	int n; cin >> n;
	while (n--) {
		int a; cin >> a;
		vec[a-1].point++;
	}
	int minn=INT_MAX;
	for(auto i:vec) {
		minn = min(minn, i.point);
	}
	for(auto i:vec) {
		if (i.point!=minn) {
			cout << i.name << '\n';
		}
	}
}
