#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the number for element %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("The number for element %d is %d\n", i + 1, ptr[i]);
    }
return 0;
}

