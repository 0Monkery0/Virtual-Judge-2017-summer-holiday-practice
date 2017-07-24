#include <stdio.h>

int main(int argc,char *argv[]){
    char headline[100000];
    int result,B,u,l,b,a,s,r,i;
    B = u = l = b = a = s = r = i = result = 0;
    scanf("%s",headline);
    while(headline[i] != '\0'){
        if(headline[i] == 'B'){
            B++;
        }
        if(headline[i] == 'u'){
            u++;
        }
        if(headline[i] == 'l'){
            l++;
        }
        if(headline[i] == 'b'){
            b++;
        }
        if(headline[i] == 'a'){
            a++;
        }
        if(headline[i] == 's'){
            s++;
        }
        if(headline[i] == 'r'){
            r++;
        }
        i++;
    }
    u = u / 2;
    a = a / 2;
    result = B;
    if(u < result){
        result = u;
    }
    if(l < result){
        result = l;
    }
    if(b < result){
        result = b;
    }
    if(a < result){
        result = a;
    }
    if(s < result){
        result = s;
    }
    if(r < result){
        result = r;
    }
    printf("%d\n",result);
    return 0;
}
