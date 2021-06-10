#include <stdio.h>

int main()
{
    int i, n, sq=0;

    /* Input range to find sum of odd numbers */
    printf("Enter upper limit: ");
    scanf("%d", &n);

    /* Find the sum of all odd number */
    for(i=1; i<=n; i+=2)
    {
        sq += i*i;
    }

    printf("Sum of odd numbers = %d", sq);

    return 0;
}