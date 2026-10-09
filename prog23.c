#include<stdio.h>
int main(){
    float bill,dis,tot;
    scanf("%f%f",&bill,&dis);
    printf("Total bill is %f",bill-(dis*bill/100));
    return 0;
}
