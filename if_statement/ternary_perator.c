#include <stdio.h>

int main(){
    int value;
    char result;
    
    scanf("%d",&value);

    result = (value >= 0)?'+':'-';
    printf(" %c",result);
    return 0;
}