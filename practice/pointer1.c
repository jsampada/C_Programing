#include<stdio.h>
// int main(){
//     int num1=10;
//     int *ptr=&num1;
//     printf("\n prit the num1=%u",num1);
//     printf("\n print the ptr=%u",*ptr);
//     printf("\n prit the  add of num1=%u",&num1);
//     printf("\n print the add of  ptr=%u",&ptr);
//     printf("\n size of num1=%d",sizeof(num1));
//     printf("\n size of *ptr=%d",sizeof(*ptr));
// }


//------------------------------------------------------------
// int main(){
//     double num1=123.34;
//     double *ptr=&num1;
//     printf("\n prit the num1=%u",num1);
//     printf("\n print the ptr=%u",*ptr);
//     printf("\n prit the  add of num1=%u",&num1);
//     printf("\n print the add of  ptr=%u",&ptr);
//     printf("\n size of num1=%d",sizeof(num1));
//     printf("\n size of *ptr=%d",sizeof(*ptr));
// }

int main(){
    char num1='A';
    char *ptr=&num1;
    printf("\n prit the num1=%c",num1);
    printf("\n print the ptr=%c",*ptr);
    printf("\n prit the  add of num1=%u",&num1);
    printf("\n print the add of  ptr=%u",&ptr);
    printf("\n size of num1=%d",sizeof(num1));
    printf("\n size of *ptr=%d",sizeof(*ptr));
}