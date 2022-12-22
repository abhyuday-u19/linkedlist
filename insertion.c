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


    for (int k = 1; k < n; k++)
    {
        temp = a[k];
        b = k - 1;
        while (b >= 0 && a[b] > temp)
        {
            a[b + 1] = a[b];
            b--;
        }
        a[b + 1] = temp;
    }

    printf("\nElements  after sorting are:\n");
    for (j = 0; j < n; j++)
    {

        printf("%d\t", a[j]);
    }
    return 0;
}