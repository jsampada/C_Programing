#include<stdio.h>
int main(){
    int roll=49;
    char sec='A';
    double per=123.46;

   printf("print the size of roll is :  %d\n",sizeof(roll));
   printf("print the size of sec is :  %d\n",sizeof('A'));
   printf("print the size of per is :  %d\n",sizeof(per));
   printf("print the size of roll+per is :  %d\n",sizeof(roll+per));


}