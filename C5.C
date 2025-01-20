//program to take multiple inputs
#include<stdio.h>

int main()
{
    int number1;
    double number2;

    scanf("%d", &number1);
    scanf("%lf", &number2);

    printf("%d",number1);
    printf("/n%.2lf", number2);

    return 0;


}