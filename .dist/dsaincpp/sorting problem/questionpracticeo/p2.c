#include<stdio.h>
int main(){
    int flag=0,n;
    printf("enter the value of n");
    scanf("%d",&n);
    if(n==1||n==0){
        printf("we cannot determine weather this is prime no or not ");
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag++;
            break;
        }
    }
    if(flag==1){
        printf("this is a coprime number");

    }
    else{
        printf("this number is prime number");
    }
    return 0;

}