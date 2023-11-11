#include <stdio.h>
int main() {
    int n;
    scanf("%d" ,&n);
    if (n>=80) {
        printf("Excellent");
    }
    else if (n>=40) {
        printf("Pass");
    }
    else {
        printf("Fail");
    }
}