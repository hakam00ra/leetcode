

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{

    int* ret = malloc(2*sizeof(int)); 
    *returnSize = 2;
    
    for (int j=0; j<numsSize; j++) {
        for (int i=1; i<numsSize; i++) {
            if ((nums[j]+nums[i]) == target && i!=j) {
                ret[0] = j;
                ret[1] = i;               
                return ret;
            }
        }
    }

    return ret;
}