int singleNonDuplicate(int* nums, int numsSize){
    int count[numsSize*10];
    for (int i=0; i<numsSize*10;i++){
        count[i]=0;
    }
    for (int i=0; i<numsSize;i++) {
        count[nums[i]] = count[nums[i]] +1; 
    }
    for (int i=0; i<numsSize*10; i++) {
        if (count[i]==1) {
            //printf("i:%d\n",i);
            return i;
        }
    }
    return -1;
}
