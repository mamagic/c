#include <stdio.h>

int main(){
	int i = 0;

	while(i < 5)
	{
		int j = 0;
		while(j <= i)
		{
			if(j == i)
			{
				printf("*");
			}		
			else
			{
				printf("O");
			}

			j++;
		}

		i++;
		printf("\n");

	}

	return 0;
}

