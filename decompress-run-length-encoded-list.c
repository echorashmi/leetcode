/**
 * 
 C Program to decompress a run-length encoded list. 
 Input: [1, 2, 3, 4]
 Output: [2, 4, 4, 4]
 
 What does this mean?
 Break the array into pairs of 2 as freq, val. So we break the input array into 2 sub-inputs: 1, 2 and 3, 4. 
 
 The output of these 2 is an array like: 
 [2] where 2 is value and 1 is frequency.
 [4, 4, 4] where 4 is value and 3 is frequency. 
 
 Then, concat these 2 together so we get the final output as:
 [2, 4, 4, 4]. 
 
 Note: The returned array must be malloced, assume caller calls free().
**/

int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    printf("Here");
}

int main(void)
{
    int *nums = { 1, 2, 3, 4 };
    int *numsSize = 4;
    int *returnSize = 4;
    decompressRLElist(nums, numsSize, returnSize);
}
