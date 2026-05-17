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
