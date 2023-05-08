#include <stdio.h>
#define LEN 20

void reverse_string(char tab[]){
    for (int i=20; i>=0; i--){
        printf("%c",tab[i]);
    }
}
int main(){
    char s[20];

    scanf("%s",s);
    printf("%s\n",s);

    reverse_string(s);

    return 0;
}