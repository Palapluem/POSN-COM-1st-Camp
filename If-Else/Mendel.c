#include <stdio.h>
int main() {
    int t,n;
    scanf("%d %d" ,&t,&n);
    if (t<=3) {
        printf("%d 0" ,n);
    }
    else if (t==4) {
        printf("0 %d" ,n);
    }
    else if (t==5) {
        printf("%d %d" ,n/2,n/2);
    }
    else if (t==6) {
        printf("%d %d" ,n*3/4,n/4);
    }
}