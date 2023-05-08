#include <stdio.h>

typedef struct 
{
    double pricing;
    double earning;
}Share;

void compute(Share share);

int main(){
    Share share1, share2;
    
    share1.pricing = 100;
    share1.earning = 500;

    share2.pricing = 600;
    share2.earning = 100;

    compute(share1);
    compute(share2);


    return 0;
}

void compute(Share share){
    printf("%lf\n",share.pricing/share.earning);
}