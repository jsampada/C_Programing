#include<stdio.h>
int main(){
            // 1. Sun
            // 2. Mon
            // 3. Tue
            // 4. Wed
            // 5. Thus
            // 6. Fri
            // 7. Sat

            printf("\n  1. Sun");
            printf("\n  2. Mon");
            printf("\n  3. Tue");
            printf("\n  4. Wed");
            printf("\n  5. Thus");
            printf("\n  6. Fri");
            printf("\n  7. Sat");

            int choice;
            printf("\n Enter Your Choice");
            scanf("%d",&choice);
           

            switch (choice)
            {
            case 1:
                 printf("\n sun");
                break;
            case 2:
                printf("\n mon");
                break;
            case 3:
                printf("\n tue");
                break;
            case 4:
                printf("\n wed");
                break;
            case 5:
                printf("\n thu");
                break;
            case 6:
                printf("\n fri");
                break;
            case 7:
                printf("\n sat");
                break;
            
            default:
                 printf("\n invalid choice");
               
            }
}