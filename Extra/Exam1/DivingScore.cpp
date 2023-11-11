#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	int sum=0,maxx=INT_MIN,minn=INT_MAX;
	for(int i=0;i<n;i++) {
		int a; cin >> a;
		sum += a;
		maxx = max(maxx, a);
		minn = min(minn, a);
	}
	if (n==3) cout << sum;
	else cout << sum-maxx-minn;
}
