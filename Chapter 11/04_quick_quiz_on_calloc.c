#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("How many integers do you want to enter: \n");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for element %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The number for element %d is %d\n", i + 1, ptr[i]);
    }
return 0;
}
