#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]){
    int n,i,j,len,flag;
    char temp[1000];
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        flag = 1;
        scanf("%s",temp);
        len = strlen(temp);
        j = 0;
        if(len == 1){
            flag = 1;
        }
        while(j < len - 1 - j){
            if(temp[j] != temp[len - 1 -j]){
                printf("no\n");
                flag = 0;
                break;
            }
            j++;
        }
        if(flag == 1){
            printf("yes\n");
        }
    }
    return 0;
}
