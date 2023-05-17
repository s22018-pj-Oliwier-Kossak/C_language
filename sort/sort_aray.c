#include <stdio.h>

void sort_array(int* array, int len){
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++){
            if(array[j]>array[j+1]){
                int index = array[j];
                array[j] = array[j+1];
                array[j+1] = index;
            }
        }
    }
}
int main(){
    int tab[5] ={3,1,2,5,4};
    sort_array(tab,5);

    for(int i=0; i <5; i++){
        printf("%d", tab[i]);
    }
}