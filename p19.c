#include<stdio.h>
int insert(int *a,int n,int elem){
    int k=0,p;
    while(1){
   if(a[k]<elem && a[k+1]>elem){
       
        while(n!=k){
             a[n]=a[n-1];
             n--;

        }
        a[k]=elem;

    }
    k++;
    }}
int main(){
    int a[5];
    int l=0,elem,q=0;
    printf("enter the value of elemet ");
    scanf("%d",&elem);
    while(l<4){
        scanf("%d",&a[l]);
        l++;
    }
    insert(a,5,elem);
    while(q<5){
    printf("%d\n",a[q]);
    q++;
    }
    return 0;
    
}