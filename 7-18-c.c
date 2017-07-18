#include <stdio.h>

int main(int argc,char *argv[]){
    int a,b,sum,i,j,now,temp;
    while(scanf("%d %d",&a,&b) != EOF){
        if(a < 1 || a > 100){
            continue;
        }
        now = 2;
        sum = 0;
        if(a % b == 0){
            temp = 0;
        }
        else{
            temp = 1;
        }
        for(i = 0;i < a / b + temp;i++){
            if(i == a / b){
                for(j = 0;j < a % b;j++){
                    sum += now;
                    now += 2;
                }
                printf("%d\n",sum / (a % b));
                sum = 0;
            }
            else{
                for(j = 0;j < b;j++){
                    sum += now;
                    now += 2;
                }
                printf("%d",sum / b);
                if(i == (a / b + temp) - 1){
                    if(temp == 0){
                        printf("\n");
                    }
                    else{
                        printf(" ");
                    }
                }
                else{
                    printf(" ");
                }
                sum = 0;
            }
        }
    }
    return 0;
}
