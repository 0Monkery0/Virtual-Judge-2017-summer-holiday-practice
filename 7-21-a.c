#include <stdio.h>

int main(int argc,char *argv[]){
    double input,sum = 0;
    int i = 0;
    while(scanf("%lf",&input) != EOF){
        sum += input;
        i++;
        if(i == 12){
            printf("$%.2lf\n",sum / 12);
            sum = i = 0;
        }
    }
    return 0;
}
