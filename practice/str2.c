#include<stdio.h>
int main(){
    char str1[]={'a','b','c'};
    char str2[4]={'a','b','c','\0'};
    char str3[]="sunbeam";

    printf("\n str1=%s",str1);//  abc☺ it will print garbage value at the end of o/p because we have not given '\o' at the end
    printf("\n str2=%s",str2);//abcs
    printf("\n str3=%s",str3);
    

    //size
    printf("\n size of str1=%d",sizeof(str1));
    printf("\n size of str2=%d",sizeof(str2));
    printf("\n size of str3=%d",sizeof(str3));//"" conside as one char so the size is 8
}
