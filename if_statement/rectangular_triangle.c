#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if((a*a + b*b ==c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)){
        printf("Triangle can be created");
    }
    else{
        printf("Triangle can not be created");
    }
    
    return 0 ;
}