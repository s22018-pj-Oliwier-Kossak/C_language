#include <stdio.h>

int fib(int number);

int main(){
    fib(9);
    return 0;
}

int fib(int number){
    int a=0, b=1, c=0;
    if(number >= 2){
        for(int i=0 ;i<number; i++){
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
            
        }
        
    }
    else if(number == 1){
        return 1;
    }
    else{
        return 0;
    }
    
    
}