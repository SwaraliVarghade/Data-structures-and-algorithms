#include<stdio.h>
#include<string.h>
int main(){
	char string[] = "Practicing DSA";
	int n = strlen(string);
	int i = 0, j = n-1;
	while(i < j){
		char temp =  string[i];
		string[i] = string[j];
		string[j] = temp;
		
		i++;
		j--;
	}
	printf("\nReverse = %s", string);
}
/*
Approach = Used two pointer technique
One pointer starts from the beginning of the string and another from the end. Characters are swapped until both pointers meet.
Time Compexity = O(n)
Space Complexity = O(1)*/
