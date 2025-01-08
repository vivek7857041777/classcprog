#include<stdio.h>
int reves(int *a , int n){
    int start=0 ,end=n-1;
    int temp;
    

    while(start<end){
       if(a[start]==a[end]){

       }
       else return 0;
        start++;
        end--;




    }
    return 1;

}
int main(){
    int n=4,t=0,l=0;
    int a[n];
    while(t<n){
        scanf("%d",&a[t]);
        t++;
    }
    
   if(reves(a,n)){
    printf("this is an palidrome");

   }
   else printf("this is not a palidrome");
   return 0;

}