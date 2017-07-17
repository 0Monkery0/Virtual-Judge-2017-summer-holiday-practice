#include <stdio.h>

int main(int argc,char *argv[]){
    int a,b,c,i;
    while(scanf("%d",&a) != EOF){
        b = 0;
        for(i = 0;i < a;i++){
            scanf("%d",&c);
            b += c;
        }
        printf("%d\n",b);
    }
    return 0;
}
