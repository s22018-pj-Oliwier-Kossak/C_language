#include <stdio.h>
# define SIZE 5
int partition(int arr[], int low, int high);
int quicksort(int arr[], int low, int high);

int tab[SIZE] = {4,1,5,2,8};


int main(){
    quicksort(tab,0,SIZE);

    
    for(int i=0; i<SIZE; i++){
        printf("%d",tab[i]);
    }
    return 0;
}


int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int leftwall = low;

    for(int i=low; i<high; i++){
        if(arr[i] < pivot){
            int index = arr[i];
            arr[i] = arr[leftwall];
            arr[leftwall] = index;
            leftwall = leftwall+1;
        }

        int index2 = pivot;
        pivot = arr[leftwall];
        arr[leftwall] = index2;

    }
    return leftwall;
}

int quicksort(int arr[], int low, int high){
    if( low < high){
        int pivot_location = partition(arr, low, high);
        quicksort(arr, low, pivot_location);
        quicksort(arr, pivot_location+1, high);
       
    }
}

