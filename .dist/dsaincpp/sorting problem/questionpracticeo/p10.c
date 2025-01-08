//going to check switch case to working properly or not
#include<stdio.h>
int main(){
    int n;
    printf("enter number between 1 to 7");
    scanf("%d",&n);
    switch(n){
        case 1: {
            printf("this is monday");
            break;
        }
        case 2: {
            printf("this tuesday");
            break;
        }
        case 3: {
            printf("this is wednesday");
            break;
        }
        case 4: {
            printf("this is thrusday");
            break;
        }
        case 5: {
            printf("this is friday");
            break;
        }
        case 6: {
            printf("this is saturday");
            break;
        }
        default : {
            printf("this is sunday");
            break;
        }

    }
    return 0;
}