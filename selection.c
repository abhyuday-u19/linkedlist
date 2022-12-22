#include <stdio.h>

int main()
{
    int a[100], i, n, j, k, temp, min;
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


    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
            temp = a[i];
            a[i]=a[min];
            a[min]=temp;
        }

    }
    

    printf("\nElements  after sorting are:\n");
    for (j = 0; j < n; j++)
    {

        printf("%d\t", a[j]);
    }
    return 0;
}