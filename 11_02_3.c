#include <stdio.h>

int main(){
	char words[255];
	char result = 0;

	scanf("%s", words);

	for(int i = 0; i < sizeof(words); i++){
		if(words[i] > result){
			result = words[i];
		}
	}

	printf("%c", result);

	return 0;
}
