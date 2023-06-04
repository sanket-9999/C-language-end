#include<stdio.h>
void printnum(int arr[],int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    printnum(arr, 5);

    return 0;
}

void printnum(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
    }
    
}