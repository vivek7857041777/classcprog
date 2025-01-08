#include<stdio.h>
int main(){
    int flag;
    int m[4][4]={{5,6,5,4},{6,4,6,5},{4,6,4,7},{4,6,7,5}};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            flag=m[i][j];
            m[i][j]=m[j][i];
            m[j][i]=flag;
           

        }
       
    }
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
           printf("%d ",m[i][j]);

        }
        printf("\n");
    }
    return 0;
}