#include<stdio.h>
void table(int arr[][10], int n, int m, int number);

int main(){
    int tables [2][10];
    table(tables, 0 , 10 , 2);
    table(tables, 0 , 10 , 3);

    return 0;
}

void table(int arr[][10], int n, int m, int number){
    for(int i=0; i<m; i++){
        arr[n][i] = number * (i+1);
        printf("%d \n",arr[n][i]);
    }
}