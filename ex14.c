#include <stdio.h>
#include <ctype.h>

// forward declarations
int canPrintIt(char ch);
void printLetters(char arg[]);

void printArguments(int argc, char *argv[])
{
    int i = 0;

    for(i = 1; i < argc; i++) {
        printLetters(argv[i]);
    }
}

void printLetters(char arg[])
{
    int i = 0;

    for(i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];

        if(canPrintIt(ch)) {
            printf("'%c' == %d \n", ch, ch);
        }
    }

    printf("\n");
}

int canPrintIt(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    printArguments(argc, argv);
    return 0;
}
