#include<stdio.h>

int main(){
    // ptr5 star number triangle-->
    /*

    1
    1 2
    1 2 3
    1 2 3 4
    
    */

    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
     
    return 0;
}