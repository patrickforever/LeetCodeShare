int islandPerimeter(int** grid, int gridRowSize, int gridColSize) {
    int i  , j , answer , countLand;
    answer = 0;
    for(i=0;i<gridRowSize;i++){
        for(j=0;j<gridColSize;j++){
            if(grid[i][j] == 1){
                answer += 4;
                if( ((i-1)>=0) && (grid[i-1][j]==1) )
                    answer -=2;
                if( ((j-1)>=0) && (grid[i][j-1]==1) )
                    answer -=2;
            }
        }
    }

    return answer;
}
