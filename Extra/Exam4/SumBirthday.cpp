#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c; cin >> a >> b >> c;
	int sum = 0;
	for(auto i:a) sum += i-'0';
	for(auto i:b) sum += i-'0';
	for(auto i:c) sum += i-'0';
	while (sum>=10) {
		cout << sum << ' ';
		string str = to_string(sum);
		sum=0;
		for(auto i:str) sum += i-'0';
	}
	cout << sum;
}
