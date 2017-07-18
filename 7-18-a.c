#include <stdio.h>

int main(int argc,char *argv[]){
    int i,mark,j;
    char mail[50];
    while(scanf("%s",mail) != EOF){
        j = 0;
        mark = 0;
        i = 0;
        for(i;mail[i] != '\0';i++){
            if(mail[i] == '@'){
                mark = i;
                j++;
            }
        }
        if(j != 1){
            printf("NO\n");
            continue;
        }
        if(mail[0] == '@' || mail[0] == '.'){
            printf("NO\n");
            continue;
        }
        i = 0;
        while(mail[i+1] != '\0'){
            i++;
        }
        if(mail[i] == '@' || mail[i] == '.'){
            printf("NO\n");
            continue;
        }
        j = 0;
        for(i = mark;mail[i] != '\0';i++){
            if(mail[i] == '.'){
                j++;
            }
        }
        if(j < 1){
            printf("NO\n");
            continue;
        }
        if(mail[mark + 1] == '.' || mail[mark - 1] == '.'){
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }
    return 0;
}
