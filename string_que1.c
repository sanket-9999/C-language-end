// string lenght--->
#include <stdio.h>
int countLength(char arr[]);

int main()
{
    /*
    char string[100];
    // gets(string);
    fgets(string, 100, stdin);
    puts(string);
    */

    char name[100];
    fgets(name, 100, stdin);
    printf("Letgth of string is: %d", countLength(name));

    return 0;
}

int countLength(char arr[]){
    int count = 0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        count++;
    }
    return count-1;
}