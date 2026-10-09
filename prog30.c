#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   if(a<=100 && a>=90)
     printf("A Grade");
   else if(a<90 && a>=70)
     printf("B Grade");
   else if(a<70 && a>=50)
     printf("C Grade");
   else if(a<50 && a>=0)
     printf("D Grade");
   else
     printf("Enter valid mark between0 and 100");
   return 0;
}
