#include<stdio.h>
int main(){
	int i, sum = 0, nums[] = {4,0,4,3,3}, k = 5;
	int size = sizeof(nums)/sizeof(nums[0]);
	double maxAvg = 0.0;
	
	for(i = 0; i < k; i++){
		sum += nums[i];
	}
	maxAvg = (double)sum/k;
	for(i = k; i < size; i++){
		sum += nums[i];
		sum -= nums[i-k];
		
		double avg = (double)sum/k;
		maxAvg = (maxAvg < avg) ? avg: maxAvg;
	}
	
	printf("\nMaximum Average is %0.5f", maxAvg);
}
/*
Approach = sliding window
Here first created window of size then updated window for next step by adding next value and substracting previous one 
dependent upon that calculated max Avg
Time Complexity = O(n)
*/
