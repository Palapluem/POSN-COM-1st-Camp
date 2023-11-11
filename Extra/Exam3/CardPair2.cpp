#include <bits/stdc++.h>
using namespace std;
char cal(string a,string b) {
	bool checka = (a[0]==a[1]);
	bool checkb = (b[0]==b[1]);
	if (checka && checkb) {
		if (a[0]==b[0]) return 'D';
		else if (a[0]>b[0]) return 'L';
		else if (a[0]<b[0]) return 'W';
	}
	else if (checka) return 'W';
	else if (checkb) return 'L';
	char aa,bb;
	aa = min(a[0], a[1]);
	bb = min(b[0], b[1]);
	if (aa<bb) return 'W';
	else if (aa==bb) return 'D';
	else if (aa>bb) return 'L';
	return 0;
}
int main(){
	for(int i=0;i<5;i++) {
		string a,b; cin >> a >> b;
		cout << cal(a, b);
	}
}
