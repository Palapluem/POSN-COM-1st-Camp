#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
	int t; cin >> t;
	
	while (t--) {
		int x,y,z; cin >> x >> y >> z;
		a += x; b += y; c += z;
		int maxx = min(a/3, min(b/4, c/2));
		cout << maxx << ' ' << a-(maxx*3) << ' ' << b-(maxx*4) << ' ' << c-(maxx*2) << '\n';
		a -= maxx*3; b -= maxx*4; c-= maxx*2;
	}
}
