//convert kilometers into miles
//distance will be given by user

#include<stdio.h>
int main(){
    
    double distancekm;
    double distancemiles;
    
    printf("enter the distance in km:");
    scanf("%lf" , &distancekm);
    
distancemiles = distancekm * 0.621;

   printf("the distance in miles is : %.2lf", distancemiles);
   
   return 0;
   
}
