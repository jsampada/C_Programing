#include<stdio.h>
int main(){
    int choice;
    enum week{Sun=1,Mon,Tue,Wed,Thu,Fri,Sat};
    // enum week day;
    
    printf("\n 1.Sun");
    printf("\n 2.Mon");
    printf("\n 3.Tue");    
    printf("\n 4.Wed");
    printf("\n 5.Thu");
    printf("\n 6.Fri");
    printf("\n 7.Sat");
    printf("enter a choice= ");
    scanf("%d",&choice);

    switch(choice)
    {
    case Sun:
        printf("\n 1.Sun");
        break;
    case Mon:
        printf("\n 2.Mon");
        break;
    case Tue:
        printf("\n 3.Tue");  
        break;
    case Wed:
        printf("\n 4.Wed");
        break;
    case Thu:
        printf("\n 5.Thu"); 
        break;
    case Fri:
        printf("\n 6.Fri");
        break;
    case Sat:
         printf("\n 7.Sat");
         break;
    
    default:
        printf("Invalid input...!");
        // break;
    }

}