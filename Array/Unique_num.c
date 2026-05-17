#include<stdio.h>
int main(){
	int nums[] = {0, 1, 1, 2, 2, 2, 2, 3, 3, 4};
	int numsSize = sizeof(nums)/sizeof(nums[0]);
	int i = 0, j = 0, k = 0;
	while(j < numsSize){
        if(nums[i] == nums[j]){
            j++;
        }
        else if(nums[i] != nums[j]){
            i++;
            k++;
            nums[i] = nums[j];
            j++;
        }
    }
    for(i = 0; i <= k; i++){
    	printf("\n%d ", nums[i]);
	}
}
/*
Problem: Remove Duplicates from Sorted Array
Approach:
Used Two Pointer Technique.
- Pointer 'i' keeps track of the position of unique elements.
- Pointer 'j' traverses the array.
- When a new unique element is found, it is placed at the next
  position of 'i'.
This modifies the array in-place without using extra space.
Time Complexity: O(n)
Space Complexity: O(1)
*/
