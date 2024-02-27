#include<stdio.h>

int main(){
	int numbers[4] = {0};
	char name[4] = {'a'};
	printf("%d %c \n",numbers[0],name[0]);

	char *another = "Meow";
	printf("%c \n",another[0]);
}
