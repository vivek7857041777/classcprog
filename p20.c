#include<stdio.h>
int main(){
    int n,elem,k=0;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the value of element ");
    scanf("%d",&elem);
    int a[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    while(1){
        if(a[k]<elem && a[k+1]>elem){
            break;

        }
        k++;
    }
    for(int l=n-1;l>=k+1;l--){
        a[n-1]=a[n-2];
    }
    a[k+1]=elem;
    for(int e=0;e<n;e++){
        printf("%d",a[e]);
    }
    return 0;
}