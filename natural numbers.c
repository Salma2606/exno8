#include <stdio.h>
 
void main()
{
    int i, num, sum = 0;
 
    printf("Enter an integer number \n");
    scanf ("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf (" %d= %d\n", num, sum);
}
