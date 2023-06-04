#include<stdio.h>

int main(){
    // ptr2 number square-->
    /*
    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4
    */

    int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}