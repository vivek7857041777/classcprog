#include<stdio.h>// conversion of lower case to uppercase to lower case
int main(){
    char nums;
    printf("enter the value of character");
    scanf("%c",&nums);
    nums+=32;
    printf("the value of lower case is equal to %c",nums); 
    return 0;

}