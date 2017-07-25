#include <stdio.h>

int gcd(int a,int b);

int main(int argc,char *argv[]){
    int n,a,b,i,c;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        i = 2;
        c = 1;
        while(1){
            c = b * i;
            if(a > c){
                if(gcd(a,c) == b){
                    printf("%d\n",c);
                    break;
                }
            }
            else if(a < c){
                if(gcd(c,a) == b){
                    printf("%d\n",c);
                    break;
                }
            }
            i++;
        }
    }
    return 0;
}

int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b,a % b);
    }
}
