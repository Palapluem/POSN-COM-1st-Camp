#include <bits/stdc++.h>
using namespace std;
string inp,a,b;
void solve(string str) {
	if (a.empty() && b.empty()) {
		cout << "T " << str << '\n';
	}
	else if (b.empty()) {
		if (str==a) {
			cout << "T -\n";
			return;
		}
		string check = str.substr(0, a.size());
		if (check==a) {
			cout << "T " << str.substr(a.size(), str.size()) << '\n';
			return;
		}
		else {
			for(int i=0;i<a.size();i++) {
				if (check[i]!=a[i]) {
					cout << "F " << i+1 << '\n';
					return;
				}
			}
		}
	}
	else if (a.empty()) {
		if (str==b) {
			cout << "T -\n";
			return;
		}
		string check = str.substr(str.size()-b.size(), str.size());
		if (check==b) {
			cout << "T " << str.substr(0, str.size()-b.size()) << '\n';
		}
		else {
			for(int i=0;i<check.size();i++) {
				if (check[i]!=b[i]) {
					cout << "F " << str.size()-b.size()+i+1 << '\n';
					return;
				}
			}
		}
	}
	else {
		if (str==a+b) {
			cout << "T -\n";
			return;
		}
		int size = str.size();
		int sizea = a.size();
		int sizeb = b.size();
		for(int i=0;i<sizea;i++) {
			if (str[i]!=a[i]) {
				cout << "F " << i+1 << '\n';
				return;
			}
		}
		string check = str.substr(str.size()-b.size(), str.size());
		for(int i=0;i<b.size();i++) {
			if (check[i]!=b[i]) {
				cout << "F " << size-(sizeb-i)+1 << '\n';
				return;
			}
		}
		cout << "T " << str.substr(a.size(), str.size()-b.size()-a.size()) << '\n';	
	}
}
int main(){
	cin >> inp;
	int d=0;
	for(int i=0;i<inp.size();i++) {
		if (inp[i]=='*') {
			d = i;
			break;
		}
	}
	a = inp.substr(0, d);
	b = inp.substr(d+1, inp.size()-1);
	int n; cin >> n;
	while (n--) {
		string str; cin >> str;
		solve(str);
	}
}
