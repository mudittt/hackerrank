#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 0; i < (n * 2) - 1; i++)
    {
        if (i < (n - 1))
        {
            printf("%d ", n);

            for (int j = 0; j < i; j++)
            {
                printf("%d ", n - (j + 1));
            }
            for (int k = 0; k < ((n * 2) - 3) - (2 * i); k++)
            {
                printf("%d ", n - i);
            }
            for (int p = 0; p < i; p++)
            {
                printf("%d ", (n - i) + p);
            }

            printf("%d ", n);
            printf("\n");
        }
        else if (i == (n - 1))
        {
            printf("%d ", n);

            for (int j = 0; j < i; j++)
            {
                printf("%d ", n - (j + 1));
            }
            for (int k = 0; k < ((n * 2) - 3) - (2 * i); k++)
            {
                printf("%d ", n - i);
            }
            for (int p = 1; p < i; p++)
            {
                printf("%d ", (n - i) + p);
            }

            printf("%d ", n);
            printf("\n");
        }
        else if (i > (n - 1))
        {
            printf("%d ", n);

            for (int j = 0; j < ((n * 2) - 1) - (i + 1); j++)
            {
                printf("%d ", n - (j + 1));
            }
            for (int k = 0; k < (2*i - ((n * 2) - 1)); k++)
            {
                printf("%d ", i - (n-2));
            }
            for (int p = 2; p < ((n * 2) - 1) - (i - 1); p++)
            {
                printf("%d ", (i - n) + p);
                
            }

            printf("%d ", n);
            printf("\n");
        }
    }
    return 0;
}