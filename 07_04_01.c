#include <stdio.h>

int main(){
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	int boolean = 1;

	printf("두정수를 입력하세요 : ");

	while(boolean){
		scanf("%d %d", &num1, &num2);
		if(num1 > num2){
			printf("다시 입력하세요");
			continue;
		}
		boolean = 0;
	}

	for(int i = num1; i <= num2; i++){
		result += i;
	}

	printf("두수의 합은 %d", result);
	
	return 0;
}
