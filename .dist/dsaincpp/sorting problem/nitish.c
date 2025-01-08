#include <stdio.h>
int main()
{
    char c;
    int a,b;
    printf("enter 1st num:\n");
    scanf("%d",&a);
    printf("enter the poerator: \n" );
    scanf("%c",&c);
    printf("enter the second no:");
    scanf("%d",&b);
    if(c =='+')
    printf("sum is %d\n",a+b);
    if(c =="-")
    printf("diffrence is %d\n",a-b);
    if(c =="*")
    printf("product is %d",a*b);
    if(c =="/")
    printf("division is %d\n",a/b);
    return 0;
}