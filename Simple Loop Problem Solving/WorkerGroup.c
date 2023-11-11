#include <stdio.h>
int main() {
    int k,m,n;
    int save_big,save_small,save_day=1000000;
    int big,small,work_big,work_small,day_big,day_small,day,check=0;
    scanf("%d %d %d" ,&k,&m,&n);
    for(int i=0;i<=k;i++) {
        day_big=0;
        day_small=0;
        day=0;
        work_big = 0;
        work_small = 0;
        big = k-i;
        small = i;
        if(big==0 && m>0) continue;
        if(small==0 && n>0) continue;
        work_big = big*6;
        work_small = small*10;
        if(work_big!=0){
            day_big=m/work_big;
            if(m%work_big!=0)
            day_big++;
        }
        if(work_small!=0){
            day_small=n/work_small;
            if(n%work_small!=0)
            day_small++;
        }
        if(m==0) day_big=0;
        if(n==0) day_small=0;
        if(day_big>day_small) day = day_big;
        else day = day_small;
        if(check==0) {
            save_big = big;
            save_small = small;
            save_day = day;
            check = 1;
        }
        if(day==save_day) {
            if(big<save_big) {
                save_big = big;
                save_small = small;
                save_day = day;
            }
        }
        if(day<save_day) {
            save_big = big;
            save_small = small;
            save_day = day;
        }
    }
    printf("%d %d" ,save_big,save_small);
}
