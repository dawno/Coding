# define N 5
#include<stdbool.h>
#include<stdio.h>
void printSolution(int board[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf(" %d ", board[i][j]);
        printf("\n");
    }
}
bool isSafe(int board[][],int row,int col){
    int i,j;
    for(int i=0;i<col;i++){
        if(board[row][col]==1)
        return false;
    }
    for(int i=row;j=col;i>=0;j>=0;i--;j--){
        if(board[row][col]==1)
        return false;
    }
    for(int i=row,int j= col;j>=0,i<N;i++,j--){
        if(board[row][col]==1)
        return false;
    }
    return true;
}
bool solveNQUtil(int board[N][N],int col){
    if(col>=N){
        return true;
    }
    for(int i=0;i<N;i++){
        if(isSafe(board,i,col)){
            board[i][col]=1;
            if(solveNQUtil(board,  col+1))
                return true;

                board[i][col]=0;

        }
    }

}
