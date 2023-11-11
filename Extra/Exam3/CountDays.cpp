#include <bits/stdc++.h>
using namespace std;
int arr[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int a,b,c,d; cin >> a >> b >> c >> d;
	if (a>arr[b] || c>arr[d] || b>12 || d>12 || b>d || (b==d && a>c)) {
		cout << "error";
		return 0;
	}
	if (b==d) cout << c-a+1;
	else {
		int sum=arr[b]-a+1;
		for(int i=b+1;i<d;i++) {
			sum += arr[i];
		}
		sum += c;
		cout << sum;
	}
}
