#include<stdio.h>


int main(int argc,char *argv[]){
	char *names[] = {
		"meow","woof","moo"
	};
	char **pName = names;
	printf("%s",pName[0]);
}
