#include<stdio.h>

int main(){

     short int num1=101;
     int num2=101;
     long int num3=101;

     printf("\n print the size of num1=%d",sizeof(num1));
     printf("\n print the size of num2=%d",sizeof(num2));
     printf("\n print the size of num3=%d",sizeof(num3));

    // short double a=10; //we can not use short and double in c
    double b=20;
    // long double c=30; // we can not use long and double in c 



    printf("\n print the size of b=%d",sizeof(b));


    // short float x=30;   both 'long' and 'float' in declaration specifiers
    float y=20;
    // long float 50;   both 'long' and 'float' in declaration specifiers

    printf("\n print the size of y=%d",sizeof(y));
  
//   ----------------------------------char------------------------------
    // short char a='A';//both 'short' and 'char' in declaration specifiers
    char d='X';
    // long Char s='R'; //both 'long' and 'char' in declaration specifiers

    // printf("\n print the size of y=%c",sizeof(a));
    printf("\n print the size of d=%d",sizeof(d));
    // printf("\n print the size of s=%c",sizeof(s));


    long long l= 2345677;
    // short long p= 2345677; // both 'long' and 'short' in declaration specifiers
    printf("\n print the size of l=%d",sizeof(l));
    // printf("\n print the size of p=%d",sizeof(p));



}