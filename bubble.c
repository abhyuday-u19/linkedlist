#include <stdio.h>

int main()
{
    int a[100], i, n, j, k, temp, b;
    printf("Enter the number of elements\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the elements: %d \n", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Elements are:\n");
    for (j = 0; j < n; j++)
    {

        printf("%d\t", a[j]);
    }

    for (b = 0; b < n - 1; b++)
    {
        for (k = 0; k < n - 1; k++)
        {
            if (a[k] > a[k + 1])
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
    printf("\nElements  after sorting are:\n");
    for (j = 0; j < n; j++)
    {

        printf("%d\t", a[j]);
    }
    return 0;
}