#include <bits/stdc++.h>
using namespace std;
struct c{
	int g,s,b;
	bool operator==(const c &o) {
		return (g==o.g && s==o.s && b==o.b);
	}
};
bool have[1010];
int main(){
	int n; cin >> n;
	vector<c> vec(1000, {0,0,0});
	int aa=INT_MIN,bb=INT_MIN,cc=INT_MIN,all=INT_MIN;
	vector<int> x,y,z,alll;
	vector<int> ans;
	while (n--) {
		int a;
		cin >> a; have[a] = true;
		cin >> vec[a].g >> vec[a].s >> vec[a].b;
		int allll=vec[a].g+vec[a].s+vec[a].b;
		if (allll>=all) {
			if (allll>all) alll.clear();
			alll.push_back(a);
		}
		if (vec[a].g>=aa) {
			if (vec[a].g>aa) x.clear();
			x.push_back(a);
			aa = vec[a].g;
		}
		if (vec[a].s>=bb) {
			if (vec[a].s>bb) y.clear();
			y.push_back(a);
			bb = vec[a].s;
		}
		if (vec[a].b>=cc) {
			if (vec[a].b>cc) z.clear();
			z.push_back(a);
			cc = vec[a].b;
		}
		if (allll>=all) {
			if (allll>all) alll.clear();
			alll.push_back(a);
			all = allll;
		}
		if (allll) {
			ans.push_back(a);
		}
	}
	int m;
	while (cin >> m) {
		if (m<=0) {
			cout << "good bye";
			break;
		}
		else if (m==1001) {
			for(auto i:x) cout << i << ' ';
			cout << '\n';
		}
		else if (m==1002) {
			for(auto i:y) cout << i << ' ';
			cout << '\n';	
		}
		else if (m==1003) {
			for(auto i:z) cout << i << ' ';
			cout << '\n';	
		}
		else if (m==2000) {
			for(auto i:alll) cout << i << ' ';
			cout << '\n';
		}
		else if (m==3000) {
			for(auto i:ans) cout << i << ' ';
			cout << '\n';
		}
		else if (have[m]) {
			cout << vec[m].g << ' ' <<  vec[m].s << ' ' << vec[m].b << ' ' << vec[m].g+vec[m].s+vec[m].b << '\n';
		}
		else {
			cout << "invalid code\n";
		}
	}
}
