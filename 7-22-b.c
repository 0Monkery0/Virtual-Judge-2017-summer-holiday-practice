#include <stdio.h>

int main(int argc,char *argv[]){
    int n,i,a,b;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d %d",&a,&b);
        a = a % 100;
        b = b % 100;
        printf("%d\n",(a + b) % 100);
    }
    return 0;
}
