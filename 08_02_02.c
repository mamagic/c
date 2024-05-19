#include <stdio.h>

int main(){

	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			int first_result = i * 10 + j;
			int second_result = j * 10 + i;
			int result = first_result + second_result;
			if(result == 99){
				printf("A 값 %d B 값 %d\n", i, j);
			}
		}
	}
}

