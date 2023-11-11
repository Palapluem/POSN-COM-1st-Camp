#include <cstdio>
int arr[9][9];
void move(int x, int y, int d) {
	int temp = arr[y][x];
	if (d==0 && x!=1) {
		arr[y][x] = arr[y][x-1];
		arr[y][x-1] = temp;
	} 
	else if (d==1 && y!=1) {
		arr[y][x] = arr[y-1][x];
		arr[y-1][x] = temp;
	} 
	else if (d==2 && x!=8) {
		arr[y][x] = arr[y][x+1];
		arr[y][x+1] = temp;
	} 
	else if (d==3 && y!=8) {
		arr[y][x] = arr[y+1][x];
		arr[y+1][x] = temp;
	}
} 
int H(int x, int y) {
	int cou = 1;
	int target = arr[y][x];
	int xx = x - 1;
	while(xx >= 1 && arr[y][xx] == target) {
		++cou;
		--xx;
	}
	xx = x + 1;
	while(xx <= 8 && arr[y][xx] == target) {
		++cou;
		++xx;
	}
	return cou;
}
int V(int x, int y) {
	int cou = 1;
	int target = arr[y][x];
	int yy = y - 1;
	while(yy >= 1 && arr[yy][x] == target) {
		++cou;
		--yy;
	}
	yy = y + 1;
	while(yy <= 8 && arr[yy][x] == target) {
		++cou;
		++yy;
	}
	return cou;
}
int main() {
	for(int i=1;i<=8;++i) {
		for(int j=1;j<=8;++j) {
			scanf("%d" ,&arr[i][j]);
		}
	}
	int n; scanf("%d", &n);
	while (n--) {
		int x,y,d;
		scanf("%d %d %d" ,&x,&y,&d);
		move(x,y,d);
		printf("H %d V %d\n", H(x, y), V(x, y));
	}
}
