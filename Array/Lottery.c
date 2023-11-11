#include <bits/stdc++.h>
using namespace std;
int arr[1001];
int main(){
	int n; cin >> n;
	while (n--) {
		int a; cin >> a;
		arr[a%1000]++;
	}
	int sum=0;
	int k; cin >> k;
	while (k--) {
		int a; cin >> a;
		sum += arr[a];
	}
	cout << sum;
}
