#include<stdio.h>
int main(){
    int num1=1;
    int * ptr=&num1;
    int **pptr=&ptr;
    printf("\n value of num1=%d",num1);
    printf("\n value of ptr=%d",*ptr);
    printf("\n value of pptr=%d",**pptr);

    printf("\n add of num1=%u",&num1);
     printf("\n add of ptr=%u",&ptr);
    printf("\n add of pptr=%u",&pptr);


}