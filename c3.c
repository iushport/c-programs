//pro to find the total income of a person

#include<stdio.h>

int main(){

    double salary;
    double bonus;
    double income;

    scanf("%lf" , &salary);
    scanf("%lf" , &bonus);

    income = salary + bonus;
    printf("%.2lf", income);

    return 0;
}
