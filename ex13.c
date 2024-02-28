#include<stdio.h>

int main(int argc , char *argv[]){
	int i = 0;
	if (argc!=2){
		printf("You need 1 argument!");
	}

	for(i = 0;argv[1][i]!='\0';i++){
		char letter = argv[1][i];

		switch (letter) {
			case 'a':
			case 'A':
				printf("%d: A \n",i);
				break;
			case 'e':
			case 'E':
				printf("%d : E \n",i);
			default:
				printf("%c is not A or E \n",letter);
		}
	}
}
