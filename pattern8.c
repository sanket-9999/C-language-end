#include<stdio.h>

int main(){
    // ptr8 alphabets square-->
    /*
    
    A B C D
    A B C D
    A B C D
    A B C D

    */

   int n;
   printf("Enter no. of rows: ");
   scanf("%d", &n);

   for(int i=1; i<=n; i++){
        int a = 1;

        for(int j=1; j<=n; j++){

            int d = a + 64;
            char ch = (char)d;

        printf("%c ", d);

          a++;
        }
        printf("\n");
   }

    return 0;
}