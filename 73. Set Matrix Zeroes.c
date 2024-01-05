void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    int row[matrixSize];
    int col[*matrixColSize];
    for (int i=0; i<matrixSize; i++) {
        row[i]=0;
    }
    for (int j=0; j<*matrixColSize; j++) {
        col[j]=0;
    }
    for (int i=0; i<matrixSize;i++){
        for (int j=0; j<*matrixColSize;j++) {
            if (matrix[i][j]==0) {
                row[i]=1;
                col[j]=1;
            }
        } 
    }
    for (int i=0; i<matrixSize; i++){
        for (int j=0; j<*matrixColSize; j++) {
            if (row[i] || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}
