#include<stdio.h>
int main(){
   float a,b;
   printf("enter the original value followed by new value");
   scanf("%f%f",&a,&b);
   printf("percentage increase is %f",((b-a)/a)*100);
   return 0;
}
