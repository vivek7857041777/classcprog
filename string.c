#include<stdio.h>
int len(char *c){
    int i=0;
    while(c[i]!='\0'){
        i++;


    }
    return i;

}
int main(){
    char c[10]="hello";
    printf("%d",c[2]);
    
    // printf("%d",len(c));
    return 0;
}