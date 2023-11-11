#include <bits/stdc++.h>
using namespace std;
struct d{
	string name;
	float point;
};
int main(){
	int n; cin >> n;
	vector<d> vec(n);
	float all=0;
	for(auto &i:vec) {
		cin >> i.name >> i.point;
		all += i.point;
	}
	all /= n;
	int cou=0;
	for(auto i:vec) {
		if (i.point>=all) cou++;
	}
	cout << cou << '\n';
	for(auto i:vec) {
		if (i.point>=all) cout << i.name << '\n';
	}
}
