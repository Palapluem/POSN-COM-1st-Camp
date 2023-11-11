#include <bits/stdc++.h>
using namespace std;
int main(){
	int a=INT_MIN,b=INT_MIN,n,p;
	cin >> p;
	int hpa = p, hpb = p;
	int ans,check=false,type;
	for(int i=1;i<=p+p;i++) {
		int n; cin >> n;
		if (a%2==1 && b%2==1 && n%2==1 && a!=INT_MIN && b!=INT_MIN) hpb -= 3;
		else if (n%2==1) hpb--;
		else if (a%2==0 && b%2==0 && n%2==0 && a!=INT_MIN && b!=INT_MIN) hpa -= 3;
		else if (n%2==0) hpa--;
		a = b;
		b = n;
		if ((hpa<=0 || hpb<=0) && !check) {
			ans = n;
			if (hpa<=0) type = 0;
			else if (hpb<=0) type = 1;
			check = true;
		}
	}
	cout << type << '\n' << ans;
}
