#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));

	int treatment = rand() % 4 + 1;
	int inputNum = 0;
	int hint_num = 1;

	for (int i = 0; i < 3; i++)
	{
		int includeNum = 0;
		int checkArr[4] = {0};

		for (int j = 0; j < hint_num; j++)
		{
			int num = rand() % 4 + 1;

			if (j == 0){
				checkArr[j] = num;
				continue;
			}

			for(int k = 0; k < j; k++)
			{	
				if(checkArr[k] == num)
				{
					j--;
					break;
				}
				else{
					checkArr[j] = num;
				}
			}

			if(treatment == num)
			{
				includeNum = 1;
			}
		}

		for(int j = 0; j < hint_num; j++){
			printf("%d ", checkArr[j]);
		}

		if(includeNum == 1){
			printf("중에 포함하고 있다\n");	
		}
		else
		{
			printf("중에 포함하고 있지않다\n");	
		}
	
		hint_num++;

		printf("계속할려면 아무키나 누르세요");
		getchar();
	}

	printf("번호는 : ");
	scanf("%d", &inputNum);

	if(inputNum == treatment)
	{
		printf("정답입니다");
	}else
	{
		printf("오답입니다 정답은 %d", treatment);
	}


	return 0;
}

