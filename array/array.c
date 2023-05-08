#include <stdio.h>
#define  LEN 10

void reverse_tab(int tab[]){

    
    for (int i=0 ; i<LEN ;i++){
        printf("%d ",tab[LEN-i-1]);
    }
}

int main()
{
   
    int tab[LEN];

    for (int i=0 ; i<LEN ;i++){
        tab[i]=i;
    }
    for (int i=0 ; i<LEN ;i++){
        printf("%d ",tab[i]);
    }

    reverse_tab(tab);

    

    return 0;
}