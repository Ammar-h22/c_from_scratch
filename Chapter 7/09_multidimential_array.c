#include <stdio.h>

int main()
{
    int no_students = 2;
    int no_subjects = 5;
    int marks[2][5];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the marks of student %d in subject %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("The marks of student %d in subject %d is : %d\n", i + 1, j + 1, marks[i][j]);
        }
    }
    return 0;
}
