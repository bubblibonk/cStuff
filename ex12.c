#include<stdio.h>

int main(){
	int area[] = {1,2,3,4,5,6};
	printf("%ld \n",sizeof(area));
	

	char meow[] = "meow";
	printf("%ld",sizeof(meow)/sizeof(char));
}
