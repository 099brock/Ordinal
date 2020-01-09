#include <stdio.h>
/*
  if the number ends in one then use the ordinal st
*/

int main(void) {
 
 unsigned int max;
 printf("max: ");
 scanf("%u", &max);

for (int i = 1; i <= max; i++)
{
  switch(i % 100) {
    case 11:
    case 12:
    case 13:
     printf("%ith\n", i);
     continue;
  }
  switch(i % 10)
  {
    case 1:
    printf("%ist\n", i);
    continue;
    case 2:
    printf("%ind\n", i);
    continue;
    case 3:
    printf("%ird\n", i);
    continue;
    default:
    printf("%ith\n", i);
    continue;
  }
}
  return 0;
}