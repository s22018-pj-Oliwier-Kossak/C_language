#include <stdio.h>
#include <string.h>
#include "employee_struct.h"

void increase_age(Employee*  employee){
    employee->age++;
}

int main(){
    Employee emp1;
    strcpy(emp1.name, "George Orwell");
    emp1.age = 30;
    

    printf("%d\n",emp1.age);
    increase_age(&emp1);
    printf("%d %s",emp1.age, emp1.name);
    return 0;
}