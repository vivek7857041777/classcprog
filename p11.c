#include<stdio.h>
#include<math.h>
int main(){
    int n,l=0,result=0,p,r;
    printf("enter the value of n");
    scanf("%d",&n);
    p=n;
    
    while(n>0){
        n=n/10;
        l++;
    }
    // result=pow(2,l);
    while(p>0){
        r=p%10;
        result+=pow(r,l);
        printf("%d\n",result);
        p=p/10;
        
        
    }
}