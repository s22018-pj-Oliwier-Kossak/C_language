#include <stdio.h>

int main(){
    int a;
    int result=1;

    scanf("%d",&a);
    
    if (a==0){
        result=0;
        printf("%d",result);
    }
    else{
        for(int i=1; i <=a; i++){
            result*=i;
        }
    }

    printf("%d",result);
    
    return 0 ;
}