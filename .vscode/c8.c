//area of a rectangle

#include<stdio.h>
int main(){

    int length;
    int breadth;
    int rectarea;

    printf("Enter Lenght and breadth respectively : ");
    scanf("%d%d ", &length , &breadth);
    
    rectarea = length * breadth ;

    printf("%d is the total area of the rectangle.");

    return 0;
}