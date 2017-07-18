#include <stdio.h>

int main(int argc,char *argv[]){
    double a,b,c,i,max,min;
    while(scanf("%lf",&a) != EOF){
        max = c = 0;
        min = 100;
        for(i = 0;i < a;i++){
            scanf("%lf",&b);
            if(b > max){
                max = b;
            }
            if(b < min){
                min = b;
            }
            c += b;
        }
        c = (c - max) -min;
        c = c / (a - 2);
        printf("%.2lf\n",c);
    }
    return 0;
}
