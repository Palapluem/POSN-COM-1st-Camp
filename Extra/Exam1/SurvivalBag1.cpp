#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y,z; cin >> x >> y >> z;
	int maxx = min(x/3, min(y/4, z/2));
	cout << maxx << ' ' << x-(maxx*3) << ' ' << y-(maxx*4) << ' ' << z-(maxx*2);
}
