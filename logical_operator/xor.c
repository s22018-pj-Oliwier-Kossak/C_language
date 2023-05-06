#include <stdio.h>

int main(){
    int a;
    int b;

    scanf("%d\n",&a);
    scanf("%d",&b);
    printf("%d %d xor: %d",a ,b, a&&(!b) || ((!a)&&b));
    
    return 0 ;
}