#include<stdio.h>
int main(){
    char arr[6]={'a','b','c','d','e','f'};
    char str[6]={'a','b','c','d','e','\0'};
    for(int i=0;i<6;i++){
        printf("\n arr is=%c",arr[i]);
        
    }
    printf("\n str is=%s",str);
    printf("\n arr is=%c",arr);

}