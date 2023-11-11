#include <bits/stdc++.h>
using namespace std;
int arr[701][701];
bool can[701][701];
int main(){
	memset(arr, -1, sizeof(arr));
	int n; cin >> n;
	for(int i=1;i<=n;i++) {
		can[1][i] = true;
		can[n][i] = true;
		can[i][i] = true;
	}
	int nowPos=1;
	for(int i=n;i;i--) {
		arr[i][1] = nowPos;
		nowPos++;
		nowPos %= 10;
	}
	for(int i=2;i<=n;i++) {
		arr[i][i] = nowPos;
		nowPos++;
		nowPos %= 10;
	}
	for(int i=n-1;i;i--) {
		arr[i][n] = nowPos;
		nowPos++;
		nowPos %= 10;
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if (arr[i][j]==-1) cout << ' ';
			else cout << arr[i][j];
			cout << ' ';
		}
		cout << '\n';
	}
}
