#include<stdio.h>

int main(){
    // ptr9 alphabets and number triangle-->
    /*
    
    1
    A B
    1 2 3
    A B C D
    1 2 3 4 5

    */

   int n;
    printf("Enter no. of rows: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int a = 1;
        int k = 1;
        for(int j=1; j<=i; j++){

            if(i%2==0){
                 int d = a + 64;
                 char ch = (char)d;
            
                printf("%c ", d);
                a++;
            }

            else{
                printf("%d ", k);
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}