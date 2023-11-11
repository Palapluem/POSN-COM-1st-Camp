#include <bits/stdc++.h>
using namespace std;
struct d{
	string n,s,l;
	int year;
};
int main(){
	int n; cin >> n;
	vector<d> vec(n);
	float maxx=-1.0;
	for(auto &i:vec) {
		cin >> i.n >> i.s >> i.l >> i.year;
	}
	int cou=0,y; cin >> y;
	for(auto i:vec) {
		if (i.year==y) {
			cout << i.n << ' ' << i.s << ' ' << i.l << '\n';
			cou++;
		}
	}
	if (cou==0) cout << "None";
}
