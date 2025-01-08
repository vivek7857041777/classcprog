// sorring of  array
#include<stdio.h>

int sorting(int *a){
    int k, temp;
    for(int i=0;i<4;i++){
        k=0;
        for(int j=1;j<5-i;j++){
            if(a[j]<a[k]){
                k=j;
            }

        }
       
        temp=a[k];
        a[k]=a[4-i];
        a[4-i]=temp;
    }
    


}
int main(){
    int a[5];
    int i=0,m=0,l=0;
    while(i<5){
        scanf("%d",&a[i]);
        i++;
    }
   
    sorting(&a[0]);
    while(l<5){
        printf("%d\n",a[l]); l++;
    }
    
    return 0;
}