#include<stdio.h>
int main(){
    int n,p,t,temp,n_new;
    printf("enter the size of arr1 and arr2 = ");
    scanf("%d%d",&n,&p);  // taking input size of array
    if(p>n){
        temp=p; p=n;n=temp;  // swaping size of array using third variable bcz arr1 size should not be less than arr2
    }
    n_new=n-p;
    int arr1[n];  
    int arr2[p];
    int arr3[n_new];
    int arr4[p];
    int arrdup[200]={0};
    printf("enter the value of element of arr1 = ");
    for(int i=0;i <n-p;i++){   // taking input of arr1
        scanf("%d",&arr1[i]);
    }
    printf("enter the value of element of arr2 = ");
    for(int j=0;j<p;j++){
        scanf("%d",&arr2[j]);  // taking input of arr2
    }
    for(int h=0;h<n_new;h++){
        arr3[h]=arr1[h];
    }
    for(int q=0;q<p;q++){
        arr4[q]=arr2[q];
    }
    for(int k=n-p,t=0;k<n,t<p;k++,t++){    // i have take extra variable t according to this arr2 value assining to arr1
        
        arr1[k]=arr2[t];  // adding element of arr2 in the last of arr1
        
    }
    printf("\nmerged array will be : ");
    for(int l=0;l<n;l++){
        printf("%d ",arr1[l]);  // printing  merged array 1 
    }
    n_new=n;
    

    for(int a=0;a<n;a++){
        for(int b=a+1;b<n;b++){     // deleting duplicate elements 
            if(arr1[a]==arr1[b]){
                for(int c=b;c<n-1;c++){
                    arr1[c]=arr1[c+1];
                    
                }
                n--;   // when element delete dec size of array
                b--;   // to check on same index when when we delete duplicate of element of array
            }
        }
    }

    printf("\narray having no duplicate : ");
    for(int d=0;d<n;d++){       // 
        printf("%d ",arr1[d]);
    }
    printf("\n");
    printf("intersection of element will be : ");

    for(int e=0;e<n_new;e++){   // all intersection element will be
        for(int g=0;g<p;g++){
            if(arr3[e]==arr4[g]&& !arrdup[arr3[e]]){  
                printf("%d ",arr3[e]);
                arrdup[arr3[e]]=1;
                break;
            }
        }
    }




    return 0;
}