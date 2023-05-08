#include <stdio.h>

double convert_unit(double galon_per_mil);
int main(){

    double x = convert_unit(10);
    printf("%lf",x);
    return 0;
}

double convert_unit(double galon_per_mil){
    double usage_in_liters_per_km;
    usage_in_liters_per_km = (galon_per_mil*0.35461);
   
    return usage_in_liters_per_km;
}
