#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    int n,i,j;
    char phoneNumber[50];
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%s",phoneNumber);
        if(strlen(phoneNumber) == 11){
            printf("6");
            for(j = 6;j < 11;j++){
                printf("%c",phoneNumber[j]);
            }
            printf("\n");
        }
        else{
            continue;
        }
    }
    return 0;
}
