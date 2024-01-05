int findDuplicate(int* nums, int numsSize){
    int count[numsSize];
    for (int j=0; j<numsSize; j++) {
        count[j] = 0;
    }
    for (int i=0; i<numsSize; i++) {
        count[nums[i]]++;
        if (count[nums[i]] > 1) {
            return nums[i];
        }
    }
    return -1;
}
