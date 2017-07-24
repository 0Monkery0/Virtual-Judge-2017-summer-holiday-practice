#include <stdio.h>

long long lcm(long long a,long long c);
long long gcd(long long b,long long d);

int main(int argc,char *argv[]){
    long long n,a,b,c,d,temp;
    scanf("%lld",&n);
    while(n--){
        scanf("%lld/%lld",&a,&b);
        scanf("%lld/%lld",&c,&d);
        temp = gcd(a,b);
        a /= temp;
        b /= temp;
        temp = gcd(c,d);
        c /= temp;
        d /= temp;
        if(gcd(b,d) == 1){
            printf("%lld\n",lcm(a,c));
        }
        else{
            printf("%lld/%lld\n",lcm(a,c),gcd(b,d));
        }
    }
    return 0;
}

long long lcm(long long a,long long c){
    return a * c / gcd(a,c);
}

long long gcd(long long b,long long d){
    if(d == 0){
        return b;
    }
    else{
        return gcd(d,b % d);
    }
}
