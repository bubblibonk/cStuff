#include<stdio.h>

int main(int argc,char *argv[]){
	int i = 0;
	for(i=1;i<argc;i++){
		printf("%s\n",argv[i]);
	}

	char *words[] = {"meow","woof","moo","quack"};

	for(i = 0;i<4;i++){
		printf("%d: %s \n",i,words[i]);
	}
	return 0;
}
