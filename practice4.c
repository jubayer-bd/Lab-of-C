#include <stdio.h>
#include <math.h>
int main()
{

    // ------- problem 1 --------
    int age[10] = {0}; // Initialize all elements to 0
    int x = 5, y = 3;
    age[0] = 20;
    age[3] = pow(x, y);
    age[4] = 40.5;
    age[5] = 1 + 1;
    age[6] = x + y;
    age[7] = x - y;
    age[8] = x * y;
    age[9] = x / y;

    for (int i = 0; i < 10; i++)
    {
        printf("age[%d] = %d\n", i, age[i]);
    }

    // ------- problem 2 --------
    int age[5];
    int sum = 0;
    printf("Enter 5 ages: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &age[i]);
    }
    printf("The ages entered are: \n");
    for (int i = 0; i < 5; i++)
    {
        sum += age[i];

        printf("age[%d] = %d\n", i, age[i]);
    }
    printf(" sum of All ages : %d \n", sum);

    // ------- problem 3 --------
    int a[2][3];
    int i, j, sum = 0;
    printf("Enter 6 numbers for a 2x3 matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (j = 0; j < 3; j++)
    {
        sum = 0; // Reset sum for each column
        for (i = 0; i < 2; i++)

        {
            sum += a[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }

    return 0;
}