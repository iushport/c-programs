//Write a program to divide 14 pens to 3 students.
//How many pens will each student get if the pens must be divided equally?
//And how many pens will be left that cannot be divided?

#include <stdio.h>

int main() {

  int penNumber = 14;
  int studentNumber = 3;
  
  int quotient = penNumber / studentNumber;
  printf("%d", quotient);

  int remainder = penNumber % studentNumber;
  printf("\n%d", remainder);

  return 0;
}