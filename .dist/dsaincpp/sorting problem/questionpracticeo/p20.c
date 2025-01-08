#include<stdio.h>
int leapyear(int n){
    
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                return 1;
            }
            else return 0;
            

        }
        else{
         return 1;
        }
    }
    else return 0;
   
}
 
 int main(){
    int m,n;
    printf("enter the value of m and n");
    scanf("%d",&m);
    scanf("%d",&n);
    for(int i=n+1;i<m;i++){
        
        if(leapyear(i)){
            printf("the prime no is %d\n",i);
        }
    }
    return 0;
    
 }