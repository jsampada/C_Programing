#include<stdio.h>
#include<string.h>
int mylen(char str[]){
    int len=0;
    for(int i=0;str[i]!='\0';i++)
    {
        len++;

    }
return len;
}

int main(){
    char str1[]="sunbeam";
    char str2[]="pune";
    int len=strlen(str1);
    printf("\n len of str1=%d",len); //''\0' is not consider
    printf("\n size of str1=%d",sizeof(str1));//''\0' is  consider
  
    printf("\n Standard strlen str3 lenght=%d",len);
}