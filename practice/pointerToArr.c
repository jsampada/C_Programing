#include<stdio.h>
#include<string.h>
// it gives o/p as diffrent because it will check the address of str1 and str2 is same or not
// int main(){
//     char str1[]="sunbeam";
//     char str2[]="sunbeam";
//     if(str1==str2){
//         printf("string is same");
//     }
//     else{
//         printf("strinng is diffrent");
//     }
// }

//----------------------------------------------------------------------------
// //it gives same cause it will check the value store at str1 and str2
// int main(){
//     char str1[]="sunbeam";
//     char str2[]="sunbeam";
//     char *ptr1=str1;
//     char *ptr2=str2;

//     if(*ptr2==*ptr1){
//         printf("string is same");
//     }
//     else{
//         printf("strinng is diffrent");
//     }
// }

//-------------------------------------------------
//it gives same cause it will check the add ar same or not
int main(){
    
    char *ptr1="sunbeam";
    char *ptr2="sunbeam";

    if(ptr2==ptr1){
        printf("string is same");
    }
    else{
        printf("strinng is diffrent");
    }
}

