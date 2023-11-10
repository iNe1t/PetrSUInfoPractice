#include <stdio.h>

int main(){
	int counter = 0;
	char c;
	int flag = 0;
	c = getchar();
	while(c != EOF){
	if(c == ' ' || c == '\t' || c == '\n')
	{
		if(flag==0)
			{
			counter++;
			flag=1;
			}
	}
	else flag =0;

	putchar(c);
	c = getchar();	
}
printf("В тексте обнаружено %d слов \n", counter);
return 0;
}
