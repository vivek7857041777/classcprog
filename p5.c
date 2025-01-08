#include<stdio.h>
int prime(int n){
   
    
   for(int i=2;i*i<=n;i++){
    if(n%i==0){
    
    return 0;}}}

    
    
    
   

int main(){
    int n,m;
    printf("enter the value of n and m");
    scanf("%d%d",&n,&m);
     if(n==0||n==1){
        printf("this is invalid number");
        return 0;
    }
    if(n>m){
        return 0;
    }
    for(int i=n+1;i<m;i++){
        if(prime(i)!=0){
        printf("%d\n",i);
        }

    }}

