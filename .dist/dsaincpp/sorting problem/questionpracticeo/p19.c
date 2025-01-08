#include<stdio.h>
int main(){
    char n;
    int digit=0,vowel=0;
    scanf(" %c",&n);
    while(n>='0' && n<='9' || n>='a'&& n<='z' || n>='A'&& n<='Z'){
        if(n>='0'&&n<='9'){
            digit++;
        }
        if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
            vowel++;

        }
        printf("enter the value of n");
        scanf(" %c",&n);

    }
    printf("the count of digits is %d",digit);
    printf("the coutn of vowel is %d",vowel);
    return 0;
}