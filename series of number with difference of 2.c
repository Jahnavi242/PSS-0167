#include <stdio.h>
int main()
{
 int start, end;
 printf("Enter the starting value: ");
 scanf("%d", &start);
 printf("Enter the ending value: ");
 scanf("%d", &end);
 printf("Numbers with a difference of 2:\n");
 for(int i = start; i <= end; i += 2)
 {
 printf("%d ", i);
 }
 return 0;
}
