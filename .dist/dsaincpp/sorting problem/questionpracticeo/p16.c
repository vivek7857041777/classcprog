#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    while(n!=0){
        if(n%2==0){
            printf("this is even num\n");
        }
        else printf("this is odd number\n");
        printf("enter the value of n");
        scanf("%d",&n);
    }
    printf("program has been completed");
    return 0;
}