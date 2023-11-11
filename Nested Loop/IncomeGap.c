#include <bits/stdc++.h>
using namespace std;
int main(){
	int maxx=INT_MIN,minn=INT_MAX;
	int n; cin >> n;
	while (n--) {
		int maxxx=INT_MIN;
		int arr[7];
		for(int i=0;i<5;i++) cin >> arr[i];
		for(int i=0;i<5;i++) {
			for(int j=0;j<5;j++) {
				if (i==j) continue;
				maxxx = max(maxxx, abs(arr[i]-arr[j]));
			}
		}
		maxx = max(maxx, maxxx);
		minn = min(minn, maxxx);
	}
	cout << maxx << ' ' << minn << ' ' << maxx-minn;
}
