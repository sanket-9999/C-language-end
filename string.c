#include <stdio.h>
#include <string.h>
void printString(char arr[]);

int main()
{
    /*
    char name[] = {"sanket"};
    char _name[] = {'s','a','n','k','e','t','\0'};
    */

    /*
    char name[50];
    scanf("%s", name);
    printf("Your name is %s", name);
    */

    char firstName[] = {"sanket"};
    char lastName[] = {"patel"};

    printString(firstName);
    printString(lastName); 

   
    char name[]= {"sanket"};
    printf("Length of string is: %d", strlen(name));


    return 0;
}


void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}
