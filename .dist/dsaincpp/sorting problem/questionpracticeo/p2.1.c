#include<stdio.h>
int flag=0;
int checkprime(int n){
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag++;
            break;
        }
    }
    return flag;
}
int main(){
    int p;
    printf("enter the value of p");
    scanf("%d",&p);
    checkprime(p);
    if(flag==1){
        printf("this number is coprime number");
    }
    else{
        printf("this number is prime number");
    }
    return 0;
}