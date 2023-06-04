#include<stdio.h>

int main(){

    // ptr1 star square-->
    /*
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    */

    int row, col;
    printf("Enter no of Row: ");
    scanf("%d", &row);

    // printf("Enter no of Col: ");
    // scanf("%d", &col);

    for(int i=1; i<=row; i++){
        for(int i=1; i<=row; i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}