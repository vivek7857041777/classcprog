#include<stdio.h>// this program is check this number is palidrome or not
#include<math.h>
int main(){
    int n,di=0,r,revno=0,p,k,t;
    printf("enter the value of that number");
    scanf("%d",&n);
    k=n; // i am doing like this bcz always value of is going to change
    t=n;
    while(n>0){
        di++;
        n=n/10;
    }
    p=pow(10,di-1);
    printf("%d",p);
    while(k>0){
        r=k%10;
        revno+=r*p;
        p/=10;
        k=k/10;

    }
    printf("reverse number is %d",revno);
    if(t==revno){
        printf("this is a palidraome number");
    }
    else {
        printf("this is not a palodrome no");
    }
    return 0;



}