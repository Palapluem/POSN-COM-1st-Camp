#include <bits/stdc++.h>
using namespace std;
struct d{
	string n,s,l;
	float grade;
};
int main(){
	int n; cin >> n;
	vector<d> vec(n);
	float maxx=-1.0;
	for(auto &i:vec) {
		cin >> i.n >> i.s >> i.l >> i.grade;
		if (i.grade>maxx) maxx = i.grade;
	}
	for(auto &i:vec) {
		if (i.grade==maxx) {
			cout << i.n << ' ' << i.s << ' ' << i.l << ' ' << i.grade;
			return 0;
		}
	}
}
