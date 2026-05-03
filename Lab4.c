// For Loop
// 1. Print the sum of First n natural numbers.
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a positive integer : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of first %d natural numbers is : %d", n, sum);
}

// 2. Print the factorial of a number n.
#include <stdio.h>
int main()
{
    int n, factorial = 1;
    printf("Enter a positive integer : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d is : %d", n, factorial);
    }
}

// 3. Write a program to check whether n is prime or not.
#include <stdio.h>
int main()
{
    int n, isPrime = 1;
    printf("Enter a positive integer : ");
    scanf("%d", &n);
    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
    {
        printf("%d is a Prime Number", n);
    }
    else
    {
        printf("%d is not a Prime Number", n);
    }
}
// 4. Write a program in C to display the first n terms of the Fibonacci series.

#include <stdio.h>
int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Fibonacci Series : ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}