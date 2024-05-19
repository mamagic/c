#include <stdio.h>

int main(){
	int num1 = 10;
	int num2 = 20;
	
	int *ptr1 = &num1;
	int *ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	printf("%d, %d\n", *ptr1, *ptr2);

	int *temp = &num1;

	printf("%d\n", *temp);

	*ptr1 = *ptr2;

	printf("%d\n", *temp);

	*ptr2 = *temp;

	printf("%d, %d\n", *ptr1, *ptr2);

	return 0;
}
