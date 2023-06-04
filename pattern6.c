#include<stdio.h>

int main(){
    // ptr6 star number triangle ulta-->
    /*
    
    1 2 3 4
    1 2 3
    1 2
    1

    */

    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}