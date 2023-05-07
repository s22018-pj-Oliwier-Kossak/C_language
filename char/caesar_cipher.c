#include <stdio.h>
#include <ctype.h>

int main(){
    int number;
    char c;
    scanf("%d",&number);

    while((c=getchar())!=EOF){
        
        if(isalpha(c)){
            if(c+number > 'z'){
                putchar(c-25+number);
            }
            else{
                putchar(c+number);
            }
            
        }
        else{
            putchar(c);
            
        }
    }

    return 0 ;
}