#include <stdio.h>

void change(char* num1, char* num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(){
	char words[255];
	
	scanf("%s", words);
	int last_index = 0;

	while(words[last_index] != '\0'){
		last_index++;	
	}

	for(int i = 0; i < last_index / 2; i++){
		change(&words[i], &words[last_index - i - 1]);		
	}

	printf("%s\n", words);

	return 0;
}

