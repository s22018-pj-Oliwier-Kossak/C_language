#include <stdio.h>

int main(){
    float diameter;

    scanf("%f",&diameter);
    printf("%.4f",3.14 * (diameter / 2)* (diameter / 2) );
    
    return 0 ;
}