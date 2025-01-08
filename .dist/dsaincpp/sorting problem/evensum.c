#include<stdio.h>
int main(){
   
    int r,n,oddsum=0,  evensum=0; 
     printf("enter the value of n");
     scanf("%d",&n);
    while(n>0){
        
        r=n%10;
        n=n/10;
        if(r%2==0){
            evensum+=r;      
        }
        else{

            oddsum+=r;
        }
    }
    printf("even sum is equal to %d\n",evensum);
    printf("odd sum is equal to %d",oddsum);
    return 0;
}