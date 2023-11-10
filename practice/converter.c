/*Сфоткай типо прога */

#include <stdio.h>
#define BUFF_SIZE 10
int main() {
	int o[BUFF_SIZE];
	long numb = 0;
	int j = 0;
	scanf("%ld", &numb);
	while(numb > 0){
		o[j] = numb % 10;
		numb /= 10;
		j++;
		if (j > BUFF_SIZE - 1){
			printf("Переполнение буфера!!\n");
			return -1;
		}
	}
	j--;
	for(int i = j; i >= 0; i--){
		putchar( (char)(o[i] + '0') );
	}
	printf("\n");
	return 0;
}
