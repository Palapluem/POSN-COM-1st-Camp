#include <stdio.h>
int main() {
    int n;
    scanf("%d" ,&n);
    if (n%15==0) {
        printf("3 5");
    }
    else if (n%3==0) {
        printf("3");
    }
    else if (n%5==0) {
        printf("5");
    }
}