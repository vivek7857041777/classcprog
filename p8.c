#include<stdio.h>
int main(){
    int r,result=0,n,t;
    printf("enter the value of n");
    scanf("%d",&n);
    t=n;
    while(n>0){
        r=n%10;
        result+=r*r*r;
        n=n/10;
    }
    if(t==result){
        printf("%d this is an angostrome no",t);
    }
    else printf("%d this is not a angostrome number",t);
    return 0;
}