/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    int** array = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    for (int i=0; i<numRows; i++) {
        array[i]=(int*)malloc((i+1)*sizeof(int));
        (*returnColumnSizes)[i]=i+1;
        array[i][0]=1;
        for (int j=1;j<i;j++) {
            array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
        }
        array[i][i]=1;
    }
    *returnSize = numRows;
    return array;
    
}
