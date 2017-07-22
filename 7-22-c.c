#include <stdio.h>

int main(int argc,char *argv[]){
    int c,v0,v1,a,l,now = 0,day = 1;
    scanf("%d %d %d %d %d",&c,&v0,&v1,&a,&l);
    while(now < c){
        if(day != 1){
            now -= l;
        }
        now = now + v0;
        if(v0 < v1){
            v0 = v0 + a;
        }
        if(v0 > v1){
            v0 = v1;
        }
        day++;
    }
    printf("%d\n",day - 1);
    return 0;
}
