#include<stdio.h>
#include<math.h>

int armstrong(int num, int order)
{

  int lastDigit = 0;
  int sum = 0;
  int power = 0;

  int n = num;

  while(n!=0) {

     // find last digit
     lastDigit = n % 10;

     // find power of digit
     power = pow(lastDigit, order);

     // add power value into sum
     sum += power;

     // remove last digit
     n /= 10;
  }

  if(sum == num)
    return 0;
  else
    return 1;
}

int main()
{
  int num, order;

  printf("Enter number: ");
  scanf("%d",&num);

  printf("Enter Order: ");
  scanf("%d",&order);

  if(armstrong(num, order) == 0)
  printf("%d is an Armstrong number of order %d.\n", num, order);
  else
  printf("%d is not an Armstrong number of order %d.", num,order);
  return 0;
}