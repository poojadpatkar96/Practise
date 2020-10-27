#include <stdio.h>
int main()
{

  int a1, b,c, sum;

  printf("Enter three numbers to add\n");
  scanf("%d%d", &a1, &b, &c);

  sum = a1 + b + c;
=======
  int a, b,c, sum;

  printf("Enter three numbers to add\n");
  scanf("%d%d", &a, &b, &c);

  sum = a + b+c;


  printf("Sum of the numbers = %d\n", sum);
  printf("sum is");
  return 0;
}
