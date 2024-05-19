#include <stdio.h>

int main(){
	int index = 0;
	int result = 0;

	while(index < 5){
		int input_num = 0;
		printf("숫자를 입력하세요 : ");
		scanf("%d", &input_num);
		if(input_num >= 1){
			index++;
			result += input_num;
		}
	}

	printf("모든숫자의 합은 : %d", result);
    return 0;

}

