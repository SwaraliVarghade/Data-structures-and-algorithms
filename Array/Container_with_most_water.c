#include<stdio.h>
int main(){
	int height[] = {1,8,6,2,5,4,8,3,7};
	int heightSize = sizeof(height)/sizeof(height[0]);
    int i, j, area = 0;
    i = 0;
    j = heightSize - 1;
    while(i < j){
        if(area < ((j-i)*((height[i]<height[j])?height[i]:height[j]))){
            area = ((j-i)*((height[i]<height[j])?height[i]:height[j]));
        }
        if(height[i] < height[j]){
            i++;
        }
        else{
            j--;
        }
    }
    printf("\nMaximum area = %d", area);
}
/*
Approach = Two pointer
one pointer starts from beginning while other from end
calculating area with = widht*min height
Move the pointer with smaller height to try getting a larger area.
Time Complexity = O(n)*/
