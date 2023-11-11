#include <stdio.h>
int max(int a,int b) {
    if (a>b) return a;
    else return b;
}
int main() {
    int x,y,m,n;
    scanf("%d %d" ,&x,&y);
    scanf("%d %d" ,&m,&n);
    int a = (m*2)+n, b = (m*6)+(n*4);
    if (x>=a && y>=b) {
        printf("Yes %d %d" ,x-a,y-b);
    }
    else {
        printf("No %d %d" ,max(a-x,0),max(b-y,0));
    }
}
