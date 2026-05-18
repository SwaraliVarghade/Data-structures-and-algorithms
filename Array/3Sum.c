#include<stdio.h>
int partition(int num[], int l, int u){
	int pivot = num[l];
	int start = l, end = u;
	while(start < end){
		while(num[start] <= pivot && start < u){
			start++;
		}
		while(num[end] > pivot && end > l){
			end--;
		}
		if(start < end){
			int temp = num[start];
            num[start] = num[end];
            num[end] = temp;
		}
	}
	int temp = num[l];
	num[l] = num[end];
	num[end] = temp;
	return end;
}

void QuickSort(int num[], int lower, int upper){
	if(lower < upper){
		int loc = partition(num, lower, upper);
		QuickSort(num, lower, loc-1);
		QuickSort(num, loc+1, upper);
	}
}

int main(){
	int num[] = {-1, 0, 1, 2, -1, -4};
	int i, j, k = 0, n = sizeof(num)/sizeof(num[0]);
	QuickSort(num, 0, n-1);
	
	while(k < n-2){
		int req = 0-num[k];
		i = k+1;
		j = n-1;
		while(i < j){
			if(num[i] + num[j] == req){
				printf("\n%d + %d + %d = 0", num[k], num[i], num[j]);
				i++;
				j--;
				while(i < j && num[i] == num[i - 1]){
                    i++;
                }

                while(i < j && num[j] == num[j + 1]){
                    j--;
                }
			}
			else if(num[i] + num[j] > req){
				j--;
			}
			else{
				i++;
			}
		}
		k++;
	}
}
/*
Approach = Quick sort, two pointer
firt sorted array using quick sort
then fixed one element i.e k 
and later used two pointer pattern
Time complexity = O(n^2)*/
