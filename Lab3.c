// // 1.  Write a C program to compute the sum of the first 10 natural numbers.

#include <stdio.h>

int main()
{

    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of the first 10 natural numbers is: %d\n", sum);

    return 0;
}

// // 2.  Write a program in C to read 10 numbers from the keyboard and find their sum and average.

#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j;
    printf("Enter 10 numbers: \n");
    scanf("%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    int sum = a + b + c + d + e + f + g + h + i + j;
    float average = (float)sum / 10;
    printf("The sum of the 10 numbers is: %d\n", sum);
    printf("The average of the 10 numbers is: %.2f\n", average);

    return 0;
}

// // 3.  Write a C program to display the n terms of odd natural numbers and their sum.
#include <stdio.h>
int main ()
{
    int n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The odd natural numbers are: \n");
    for (int i = 1; i <= n; i++)
    {
        int oddNumber = 2 * i - 1;
        printf("%d ", oddNumber);
        sum += oddNumber;
    }
    printf("\nThe sum of the odd natural numbers is: %d\n", sum);

    return 0;
}
// // 4.  Write a program in C to display the cube of the number up to an integer.
// //      Test Data :
// //       Input number of terms : 5
// //       Expected Output :
// //       Number is : 1 and cube of the 1 is :1
// //       Number is : 2 and cube of the 2 is :8
// //       Number is : 3 and cube of the 3 is :27
// //       Number is : 4 and cube of the 4 is :64
// //       Number is : 5 and cube of the 5 is :125

#include <stdio.h>
int main()
{
    int n;
    printf("Input number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int cube = i * i * i;
        printf("Number is: %d and cube of the %d is: %d\n", i, i, cube);
    }

    return 0;
}