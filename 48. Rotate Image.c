void rotate(int** matrix, int matrixSize, int* matrixColSize){
    for (int i=0; i<matrixSize; i++) {
        for (int j=0; j<i; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    //printf("%d\n",*matrixColSize);
    for (int i=0; i<*matrixColSize;i++) {
        for (int j=0; j<(*matrixColSize)/2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][(*matrixColSize)-j-1];
            matrix[i][(*matrixColSize)-j-1] = temp;
        }
    }
    return matrix;
}
