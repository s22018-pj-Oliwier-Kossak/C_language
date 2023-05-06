#include <stdio.h>

int main(){
    int a;
    int i;

    scanf("%d",&a);
   

    for ( i=a; i >=1; i-=2){
        printf("%d\n",i);
    }
    
    return 0 ;
}