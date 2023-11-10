#include <stdio.h>
#define BUFF_SIZE 10

int main(){
	char str[BUFF_SIZE];
	long int t = 0;
	int i = 0;

	scanf("%10s", str);
	str[BUFF_SIZE - 1] = '\0';
	while(str[i] != '\0'){
		if(48 <= str[i] <= 57 && i < BUFF_SIZE) {
			t *= 10;
			t = t + (int)(str[i] - '0');
			i++;
		}
	}
	printf("%d\n", t);
	return 0;
}
