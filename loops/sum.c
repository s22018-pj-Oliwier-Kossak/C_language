#include <stdio.h>

int main(){
    int number;
    int sum=0;

    scanf("%d",&number);

    for (int i=1; i <=number; i++){
        sum +=i;
    }
    printf("sum: %d",sum);

}