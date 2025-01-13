#include<stdio.h>
int targetSum(int n,int target,int *arr){
    int sum;
    for(int j=0;j<n-1;j++){
        if(arr[j]>target){break;}
        for(int k=j+1;k<n;k++){
            sum=arr[j]+arr[k];
            if(sum>target){ break;}
            if(sum==target){
                printf(" j= %d k= %d",j,k);
                return 0;
            }

        }
    }
    printf("target sum is not found in this array");
    return 0;

}
int main(){
    int n,target;
    printf("enter the size of array = ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the value of target = ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    targetSum(n,target,arr);
}