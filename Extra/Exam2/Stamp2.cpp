#include <bits/stdc++.h>
using namespace std;
int sum,sum_use,stamp;
int idd[4],t[4],v[4];
int main(){

	for(int i=1;i<=3;i++) {
		cin >> idd[i] >> t[i] >> v[i];
	}
	int n,k; cin >> n >> k;
	while (n--) {
		int id,p; cin >> id >> p;
		bool check = false;
		for(int i=1;i<=3;i++) {
			if (id==idd[i]) {
				check = true;
				if (t[i]==1) {
					stamp += v[i];
					break;
				}
				else if (t[i]==2) {
					p -= v[i];
					break;
				}
			}
		}
		sum += p;
		if (check==0) sum_use += p;
	}
	cout << sum << '\n' << sum_use << '\n' << stamp+(sum_use/k);
}
