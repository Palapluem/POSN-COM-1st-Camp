#include <bits/stdc++.h>
using namespace std;
long long arr[1010];
int main(){
	long long k,n; cin >> k >> n;
	set<int> s;
	long long a,b,sum,dis,dis_plus;
	for(int i=0;i<n;i++) cin >> arr[i];
	bool check = false;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			int plus_now = arr[i] + arr[j];
			int dis_now = abs(arr[i] - arr[j]);
			if ((!check && arr[i]!=arr[j]) || (abs(k-plus_now)<=dis_plus && arr[i]!=arr[j])) {
				check = true;
				sum = arr[i] + arr[j];
				a = arr[i];
				b = arr[j];
				dis = dis_now;
				dis_plus = abs(k-plus_now);
			} 
		}
	}
	if (a>b) swap(a,b);
	cout << sum << '\n' << a << ' ' << b;
}
