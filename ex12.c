#include<stdio.h>

int main(int argc , char *argv[]){
	int i = 0;
	if(argc==1){
		printf("Only one arg");
	} else if(argc>1 && argc<4){
		printf("look at deez arguments:\n");
		for (i=0;i<argc;i++){
			printf("%d : %s \n",i,argv[i]);
		}
	}
}
