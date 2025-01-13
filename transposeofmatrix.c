#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);    //  taking input of order of matrix
    int mat[n][n];
    printf("enter the element of matrix : ");
    for(int i=0;i<n;i++){          //  taking input of matrix of of order n
        for(int j=0;j<n;j++){         
            scanf("%d",&mat[i][j]);
        }
    }
     
     for(int k=0;k<n;k++){              // printing matrix in the form of matrix
        for(int l=0;l<n;l++){
            printf("%d",mat[k][l]);
            printf(" ");
        }
        printf("\n");
     }
     printf("\n");

     for(int m=0;m<n;m++){
        for(int o=m;o<n;o++){  
            if(m==o){
                continue;
            }                                    // here i am swaping two numbers mat[m][o]=mat[o][m]  without using third variable
            mat[m][o]=mat[m][o]+mat[o][m];       // and second loop will start from m bcz previous value of o would have interchanged so we cannot change it
            mat[o][m]=mat[m][o]-mat[o][m];
            mat[m][o]=mat[m][o]-mat[o][m];

        }
     }
     for(int s=0;s<n;s++){
        for(int r=0;r<n;r++){
            printf("%d",mat[s][r]);  // printing all values of transpose of matrix
            printf(" ");
        }
        printf("\n");
     }
     return 0;}
      

