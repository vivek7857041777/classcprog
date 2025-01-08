#include<stdio.h>
int main(){
    int a,b,c,flag;
    printf("enter the value of abc");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        flag= (a<(b+c));}
    else if(b>c){flag=(b<(a+c));}
    else if(c>a){flag=(c<(b+a));}
    if(flag==1){
        printf("this is a valid triangle");
    }
    else{
        printf("this is not a valid triangle");
    }
    return 0;


    
    
}