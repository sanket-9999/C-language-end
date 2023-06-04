#include<stdio.h>

int main(){
    // ptr12 star cross-->
    /*

    *   *
      *
    *   * 

    */

    int n;
    printf("Enter no. of rows in odd numberṣ: ");
    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i+j==n+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }

        printf("\n");
    }
    

    return 0;
}