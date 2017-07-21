#include <stdio.h>

int main(int argc,char *argv[]){
    int n,a,b,i,j;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&a);
        if(a < 0 || a > 30){
            continue;
        }
        b = 3;
        for(j = 0;j < a;j++){
            b = (b - 1) * 2;
        }
        printf("%d\n",b);
    }
    return 0;
}
