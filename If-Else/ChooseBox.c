#include <stdio.h>
int main() {
    int a,b,c; 
    scanf("%d %d %d" ,&a,&b,&c);
    if (a<b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b<c) {
        int temp = b;
        b = c;
        c = temp;
    }
    if (a<b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a>50 || b>40 || c>20) {
        printf("Oversize product\n");
        printf("%d" ,(a*b*c)-(40*50*20));
    }
    else if (a>25 || b>15 || c>12) {
        printf("3\n%d" ,(40*50*20)-(a*b*c));
    }
    else if (a>15 || b>10 || c>8) {
        printf("2\n%d" ,(25*15*12)-(a*b*c));
    }
    else {
        printf("1\n%d" ,(10*15*8)-(a*b*c));
    }
}