#include <stdio.h>

int main(int argv,char *argc[]){
    int a,b;
    while(scanf("%d %d",&a,&b)){
        if(a == 0 && b == 0){
            break;
        }
        printf("%d\n",a + b);
    }
    return 0;
}

