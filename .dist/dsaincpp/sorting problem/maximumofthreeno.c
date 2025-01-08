#include<stdio.h>
int main(){
  int a,b,c;
  printf("enter the value of abc");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b){
    if(a>c){
        printf("maximum value is a");
    }
    else{printf("maximum is c");}
  }
  if(b>c){
    if(b>a){printf("maximum value is b");}
    else{printf("maximum value is a");}
  }
  return 0;
}