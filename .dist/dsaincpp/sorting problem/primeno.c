#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",n);
    if(n==0||n==1){
        printf("this is prime no");
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            printf("this is a coprime no");
            break;
        }
        else{
            printf("this is a coprime no");
        }
    }
    return 0;
}