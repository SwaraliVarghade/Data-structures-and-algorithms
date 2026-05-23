#include<stdio.h>
int main(){
	int height[] = {4,2,0,3,2,5};
	int heightSize = sizeof(height)/sizeof(height[0]);
	
	int left = 0, right = heightSize-1, leftMax = 0, rightMax = 0, water = 0;
	
	while(left < right){
		if(height[left] < height[right]){
			if(height[left] >= leftMax){
				leftMax = height[left];
			}
			else{
				water += leftMax-height[left];
			}
			left++;
		}else{
			if(height[right] >= rightMax){
				rightMax = height[right];
			}
			else{
				water += rightMax-height[right];
			}
			right--;
		}
	}
	printf("\nWater Trapped = %d", water);
}
/*
Approach = Two pointer 
Time complexity = O(n)*/
