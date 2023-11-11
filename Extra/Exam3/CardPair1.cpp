#include <bits/stdc++.h>
using namespace std;
int main(){
	for(int i=0;i<5;i++) {
		string a,b; cin >> a >> b;
		char aa,bb;
		aa = min(a[0], a[1]);
		bb = min(b[0], b[1]);
		if (aa<bb) cout << 'W';
		else if (aa==bb) cout << 'D';
		else if (aa>bb) cout << 'L';
	}
}
