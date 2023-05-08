#include <stdio.h>
#include <ctype.h>

int main(){

    char c;
    
    while((c=getchar())!=EOF){
        if(isblank(c)){
           //nothing
        }
        else{
            putchar(c);
        }

    }

    return 0 ;
}