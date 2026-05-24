#include<stdio.h>
int isVowel(char ch){
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
int main(){
	char s[] = "leetcode";
	int i, k = 3, vowelCnt = 0;
	
	for(i = 0; i < k; i++){
		if(isVowel(s[i])){
			vowelCnt++;
		}
	}
	int maxCnt = vowelCnt;
	for(i = k; s[i] != '\0'; i++){
		if(isVowel(s[i])){
			vowelCnt++;
		}
		if(isVowel(s[i-k])){
			vowelCnt--;
		}
		maxCnt = (vowelCnt > maxCnt)? vowelCnt: maxCnt;
	}
	printf("%d",maxCnt);
}
/*
Approach = sliding window 
here first created k sized window check each element whether it is vowel or not based on that maintained count of vowel
by using sliding window approach if next element is vowel then increased vowel count and if previous element is vowel then decreased count
simultaneously maintained maxCnt of vowel
Time Complexity = O(n)
Space complexity = O(1) */
