#include <stdio.h>

int main(int argv,char *argc[]){
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
        printf("%d\n\n",a + b);
    }
    return 0;
}
