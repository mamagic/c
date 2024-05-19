#include <stdio.h>

int main(){
	int num1 = 0;
	int num2 = 0;	
	int index = 0;
	int result = 0;

	printf("두개의 정수 입력 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		index = num2;	
	}
	else
	{
		index = num1;
	}

	for(int i = 1; i <= index; i++){
		if (num1 % i == 0 && num2 % i == 0){
			result = i;
		}	
	}

	printf("두수의 최대공약수는 : %d\n", result);
}

