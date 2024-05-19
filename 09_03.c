#include <stdio.h>

int recurcive(int num){
	if(num == 1){
		return 1;
	}

	return recurcive(num - 1) * num;
}

int main(){

	printf("%d", recurcive(5));

	return 0;
}

