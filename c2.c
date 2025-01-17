//program using sizeof() operator

#include<stdio.h>
int main(){
    int age;
    float bonus;
    double salary;
    char alphabet;

    //size of returns the size in bytes
    printf("the size of an int is %d bytes \n", sizeof(age));
     printf("the size of an float is %d bytes \n", sizeof(bonus));
      printf("the size of an double is %d bytes \n", sizeof(salary));
       printf("the size of an char is %d bytes \n", sizeof(alphabet));

   return 0;
}