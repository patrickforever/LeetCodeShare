int** generate(int numRows, int** columnSizes) {
    int i , j , **answer;
    *columnSizes = (int*) malloc(sizeof(int)*numRows);
    answer = (int **) malloc(sizeof(int*)*numRows);
    for(i=0;i<numRows;i++){
        *((*columnSizes)+i) = i+1 ;
        *(answer+i) = (int*) malloc( sizeof(int) * (i+1) );
        for(j=0;j<=i;j++){
            if(!j || j == i)
                *( *(answer+i)+j) = 1;
            else
                *( *(answer+i)+j) = *( *(answer+i-1)+j-1) + *( *(answer+i-1)+j);
        }
    }
    return answer;
}
