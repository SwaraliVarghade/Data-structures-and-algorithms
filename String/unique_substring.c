#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("\nEnter any string : ");
	scanf("%s",&str);
	
	int freq[256] = {0}, l = 0, maxlen = 0, r, n = strlen(str);
	
	for(r = 0; str[r] != '\0'; r++){
		freq[str[r]]++;
		
		while(freq[str[r]] > 1){
			freq[str[l]]--;
			l++;
		}
		
		int currentLen = r - l + 1;
		if(maxlen < currentLen){
			maxlen = currentLen;
		}
	}	
	printf("\nLength of longest string without duplicate characters is : %d", maxlen);
}

//Approach : sliding window (dynamic)
//Time complexity : O(n)

