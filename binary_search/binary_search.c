#include <stdio.h>
#include <stdbool.h>

int binary_search(int* arr, int len, int target){
    int start = 0;
    int end = len ;
 
    while(start <= end){
        int mid = start+(end-1)/2;
        if(arr[mid] == target){
            printf("found");
            break;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else if (target > arr[mid]){
            start = mid+1;
        }
        
        printf("not found");
        break;

    }
    
}
int main(){
    int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    binary_search(tab,10,11);
    return 0;
}