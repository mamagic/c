#include <stdio.h>

int sum(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	int first_num = 0;
	int second_num = 1;

	printf("0 ");
	printf("1 ");
	
	for(int i = 0; i < 10; i++)
	{
		int result = sum(first_num, second_num);
		printf("%d ", result);
		first_num = second_num;
		second_num = result;	
	}
	return 0;

}


