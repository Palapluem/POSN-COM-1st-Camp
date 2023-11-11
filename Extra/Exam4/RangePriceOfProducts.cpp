#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k; cin >> n >> k;
	while (n--) {
		int maxx=INT_MIN,minn=INT_MAX;
		double avg=0.0;
		for(int i=1;i<=k;i++) {
			int a; cin >> a;
			avg += 1.0*a;
			maxx = max(maxx, a);
			minn = min(minn, a);
		}
		avg /= 1.0*k;
		cout << minn << ' ' << maxx << setprecision(2) << fixed << ' ' << avg << '\n';
	}
}
