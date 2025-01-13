#include<stdio.h>
 void maxpro(int n, int *stock){
    int diff;
    int maxprofit=0;
for(int j=0;j<n-1;j++){
    for(int k=j+1;k<n;k++){
        diff=stock[k]-stock[j];
        if(diff>maxprofit){
            maxprofit=diff;
        }

    }
} 
if(maxprofit!=0){
printf("the maximum profit will be = %d",maxprofit);
}else{
    printf("there is no possibilities to make profit");
}
}
int main(){
int n;
printf("enter the value of n");
scanf("%d",&n);
int stock[n];
for(int i=0;i<n;i++){
    scanf("%d",&stock[i]);
}
maxpro(n,stock);
return 0;
}
 


