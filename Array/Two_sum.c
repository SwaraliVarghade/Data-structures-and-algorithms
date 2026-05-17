#include<stdio.h>
#include<stdlib.h>
int main(){
	int num[10] = {1, 4, 5, 7, 9, 10, 13, 15};
	int n = sizeof(num) / sizeof(num[0]);
	int i = 0, j = n-1, k, target = 21;
	while(i < j){
		if(num[i] + num[j] == target){
			printf("%d + %d = %d",num[i], num[j], target);
			return 0;
		}
		else if(num[i] + num[j] > target){
			j--;
		}else{
			i++;
		}
	}
	printf("\nPair not exsits");
}
