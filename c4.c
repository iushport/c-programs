//taking multiple user inputs

#include<stdio.h>
int main(){

char alphabet;
double salary;

print("enter input values for char and double:");
scanf("%c %lf", &alphabet ,&salary);
printf("character input : %c",alphabet);
printf("Double input : %.2lf", salary);

return 0;
}