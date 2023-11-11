#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c; cin >> a >> b >> c;
	cout << setprecision(2) << fixed << ((max(a,b)*c)/50.0)+(c*b)/200.0+40.0;
}
