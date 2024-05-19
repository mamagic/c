#include <stdio.h>

int main(){
	const int MONEY = 3500 - 1600;
	const int PRICE[] = {500, 700, 400};

	for(int i = 0; PRICE[0] * i <= MONEY; i++){
		for(int j = 0; PRICE[1] * j <= MONEY; j++){
			for(int k = 0; PRICE[2] * k <= MONEY; k++){
				if ( PRICE[0] * i + PRICE[1] * j + PRICE[2] * k == MONEY){
					printf("%d개 %d개 %d개\n", i + 1, j + 1, k + 1);
				}
			}
		}
	}
					
	return 0;
}
