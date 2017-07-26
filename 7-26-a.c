#include <stdio.h>

long result = 0;
char chessboard[8][8];
int status[8] = {0},sum = 0;

int dfs(int n,int k,int row,int col);

int main(int argc,char *argv[]){
    int n,k,i,j;
    while(scanf("%d %d",&n,&k) != EOF){
        if(n == -1 && k == -1){
            break;
        }
        sum = 0;
        for(i = 0;i < n;i++){
            scanf("%s",chessboard[i]);
        }
        for(i = 0;i < n;i++){
            for(j = 0;j < n;j++){
                if(chessboard[i][j] == '#'){
                    sum++;
                }
            }
        }
        if(k > sum){
            printf("%d\n",0);
            continue;
        }
        else{
            sum = 0;
            dfs(n,k,0,0);
            printf("%ld\n",result);
            result = 0;
        }
    }
    return 0;
}

int dfs(int n,int k,int row,int col){
    for(row;row < n;row++){
        for(col;col < n;col++){
            if(chessboard[row][col] == '#'){
                if(status[col] == 1){
                    continue;
                }
                else{
                    chessboard[row][col] = '@';
                    status[col] = 1;
                    sum++;
                    if(sum == k){
                        result++;
                        chessboard[row][col] = '#';
                        status[col] = 0;
                        sum--;
                    }
                    else{
                        dfs(n,k,row + 1,0);
                        chessboard[row][col] = '#';
                        status[col] = 0;
                        sum--;
                    }
                }
            }
        }
        col = 0;
    }
    return 0;
}
