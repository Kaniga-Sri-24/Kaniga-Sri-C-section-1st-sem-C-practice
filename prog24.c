#include<stdio.h>
int main(){
    float sal,bonus,final;
    scanf("%f%f",&sal,&bonus);
    printf(" The final salary is%f",sal+(bonus*sal/100));
    return 0;
}
