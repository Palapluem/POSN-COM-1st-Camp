#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
int main(){
	int n; cin >> n;
	while (n--) {
		int a; cin >> a;
		mp[a]++;
	}
	int a=0,b=0;
	for(auto i:mp) {
		if (i.second>b) {
			a=i.first;
			b=i.second;
		}
		else if (i.second==b && i.first>a) {
			a=i.first;
		}
	}
	cout << a << '\n' << b;
}
