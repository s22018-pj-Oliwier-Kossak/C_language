#include <stdio.h>

int fib_recursion(int number);

int main(){
    printf("%d",fib_recursion(8));
    return 0;
}

int fib_recursion(int number){
    if(number <= 0){
        return 0;
    }
    else if(number == 1){
        return 1;
    }
    else{
        return fib_recursion(number-1)+fib_recursion(number-2);
    }
}