bool isValidSudoku(char** board, int boardRowSize, int boardColSize)
{
    int i , j , k ,index;
    bool rowCheck[9][9]={0};
    bool columnCheck[9][9]={0};
    bool blockCheck[9][9]={0};
    for(i=0;i<boardColSize;i++){
        for(j=0;j<boardColSize;j++){
            if(board[i][j] !='.'){
                index = board[i][j]-'1';
                k = i/3 *3 + j/3;
                if(rowCheck[i][index] || columnCheck[j][index] || blockCheck[k][index])
                    return false;
                else
                    rowCheck[i][index] = columnCheck[j][index] = blockCheck[k][index] = true;
            }
        }
    }
    return true;
}
