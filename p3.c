#include<stdio.h>
int com(char *a,char *b){
    while(*a!='\0'&& *b!='\0'){
        a++;
        b++;
        if(*a>*b){
            return 1;
            break;
        }
         if(*b>*a){
            return -1;
            break;
        }
        
    }
    return 0;
}
int main(){
    char a[6]="raju";
    char b[6]="raj";
    printf("%d",com(a,b));
    return 0;
}