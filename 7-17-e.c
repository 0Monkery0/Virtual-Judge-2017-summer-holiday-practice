#include <stdio.h>

int main(int argc,char *argv[]){
    int a,b,c,d,i,j;
    scanf("%d",&d);
    for(j = 0;j < d;j++){
        scanf("%d",&a);
        b = 0;
        for(i = 0;i < a;i++){
            scanf("%d",&c);
            b += c;
        }
        printf("%d\n",b);
    }
    return 0;
}
