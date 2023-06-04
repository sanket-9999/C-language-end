#include<stdio.h>
void reverse(int arr[], int n);
void printArray(int arr[], int n);

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    reverse(arr, 5);
    printArray(arr, 5);

    return 0;
}

void reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int first_value, second_value;
        first_value = arr[i];
        second_value = arr[n-i-1];
        arr[i] = second_value;
        arr[n-i-1] = first_value;
    }

}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
    }
    
}