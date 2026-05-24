#include<stdio.h>
#include<limits.h>
int main(){
	int nums[] = {2,3,1,2,4,3}, target = 7, count = 0, r, l = 0, sum = 0;
	int size = sizeof(nums)/sizeof(nums[0]);
	
	int minLen = INT_MAX;
	
	for(r = 0; r < size; r++){
		sum += nums[r];
		while(sum >= target){
			int len = r-l+1;
			if(len < minLen){
				minLen = len;
			}
			sum -= nums[l];
			l++;
		}
	}
	if(minLen == INT_MAX){
		minLen = 0;
	}
	
	printf("\nMinCOunt = %d",minLen);
}
/*
Approach = sliding window
it is a kind of variable sliding window where size of window is changing
here i am continously checking if sum is greater than or equal to target or not
if it is then finding out minimum len and shrinking left so that we can check if their exsits more smaller combinations or not
Time Complexity = O(n)
Space complexity = O(1)*/
