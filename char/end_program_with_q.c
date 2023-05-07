#include <stdio.h>

int main(){
    char c;

    while(scanf("%c",&c)>0){
        
        if(c !='q'){
            printf("%c",c);
        }
        else{
            break;
        }

    }
    return 0 ;
}