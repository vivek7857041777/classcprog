// writint code of armngostrome no
#include<stdio.h>
#include<math.h>
int len(int n){
    int l=0;
    while(n>0){
        n=n/10;
        l++;
    }
    return l;
}
int armn(int n,int l){
   int sum=0,r=0;
    while(n>0){
        r=n%10;
        sum+=pow(r,l);
        n=n/10;
    }
    return sum;


}
int main(){
    int n,l=0,t,p;
    printf("enter the value of n");
    scanf("%d",&n);


    
   
    if(armn(n,l)==p){
        printf("this is a armngostrome no");
    }
    else printf("this is not a armngostrome no");
    return 0;

}