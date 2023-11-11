#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t=0; cin >> n;
	string str; cin >> str;
	int size=str.size();
	string finish = str;
	sort(finish.begin(), finish.end());
	while (str!=finish) {
		bool check = false;
		for(int i=0;i<size-1;i++) {
			if (str[i]=='M' && str[i+1]=='F') {
				swap(str[i], str[i+1]);
				i++;
				check = true;
			}
		}
		if (check) t++;
	}
	cout << t;
}
