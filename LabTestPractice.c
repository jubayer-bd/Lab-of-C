// 🔢 Problem 1 — Temperature Converter (Lec 1 + 2)
// Write a C program that takes a temperature in Celsius as a float input and converts it to Fahrenheit and Kelvin. Print all three values with 2 decimal places.

// Formula: F = (C × 9/5) + 32 | K = C + 273.15

// #include <stdio.h>
// int main()
// {
//     float celsius, fahrenheit, kelvin;
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);
//     fahrenheit = (celsius * 9 / 5) + 32;
//     kelvin = celsius + 273.15;
//     printf("Temperature in Celsius: %.2f\n", celsius);
//     printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
//     printf("Temperature in Kelvin: %.2f\n", kelvin);

//     return 0;
// }

// 🔢 Problem 2 — Simple Calculator (Lec 2 + 3)
// Topic: Variables, arithmetic operators, format specifiers
// Write a C program that takes two integers and a character (+, -, *, /, %) as input, then performs and prints the result of the corresponding operation. Handle division by zero with a message.
// #include <stdio.h>
// int main()
// {
//     int num1, num2;
//     double result;
//     char operator;
//     printf("Enter the First Integer : ");
//     scanf("%d", &num1);
//     printf("Enter the Second Integer : ");
//     scanf("%d", &num2);
//     printf("Enter a character (+, -, *, /, %) as input : ");
//     scanf(" %c", &operator);
//     printf("%d %d %c \n", num1, num2, operator);

//     switch (operator)
//     {
//     case '+':
//         result = num1 + num2;
//         printf("Result is %.2lf", result);
//         break;
//     case '-':
//         result = num1 - num2;
//         printf("Result is %.2lf", result);
//         break;
//     case '/':
//         if (num2 != 0)
//         {
//             result = (float)num1 / num2;
//             printf("Result is %lf", result);
//         }
//         else
//         {
//             printf("Zero Value can't be divided");
//         }
//         break;
//     case '%':
//         if (num2 != 0)
//         {
//             result = num1 % num2;
//             printf("Result is %lf", result);
//         }
//         else
//         {
//             printf("Zero Value cannot printed ");
//         }
//         break;
//     default:
//         printf("Invalid Operator");
//     }
//     return 0;
// }

// 🔢 Problem 3 — Swap Without Third Variable (Lec 2 + 3)
// Topic: Variables, assignment operators, arithmetic
// Write a C program to swap two integers without using a third variable. Use only arithmetic operators (+, -) or bitwise XOR (^). Print the values before and after swapping.

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter the value of a : ");
//     scanf("%d", &a);
//     printf("Enter the value of b : ");
//     scanf("%d", &b);
//     printf("Before Swapping : a = %d, b = %d\n", a, b);

//     // Swapping using arithmetic operators
//     a = a + b; // a = 5 + 6 = 11
//     b = a - b; // 11 - 6 = 5
//     a = a - b; // 11 - 5 = 6

//     // using third variables

//     int temp = a; // temp = 5
//     a = b;        // a = 6
//     b = temp;     // b = 5

//     printf("After Swapping : a = %d, b = %d\n", a, b);

//     return 0;
// }

// 🔢 Problem 4 — Grade Calculator (Lec 2 + 3 + 4)
// Topic: Data types, relational operators, if-else if-else
// Write a C program that takes a student's marks (0–100) as input and prints the letter grade and GPA using the following scale:

// Marks    Grade   GPA
// 90–100   A       4.0
// 80–89    B       3.0
// 70–79    C       2.0
// 60–69    D       1.0
// 0–59     F       0.0

// #include <stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter the marks of the student (0-100) : ");
//     scanf("%d", &marks);
//     // if (marks >= 90 && marks <= 100)
//     // {
//     //     printf("Grade : A\n");
//     //     printf("GPA : 4.0");
//     // }
//     // else if (marks >= 80 && marks <= 89)
//     // {
//     //     printf("Grade : B\n");
//     //     printf("GPA : 3.0");
//     // }
//     // else if (marks >= 70 && marks <= 79)
//     // {
//     //     printf("Grade : C\n");
//     //     printf("GPA : 2.0");
//     // }
//     // else if (marks >= 60 && marks <= 69)
//     // {
//     //     printf("Grade : D\n");
//     //     printf("GPA : 1.0");
//     // }
//     // else if (marks >= 50 && marks <= 59)
//     // {
//     //     printf("Grade : F\n");
//     //     printf("GPA : 0.0");
//     // }
//     // else
//     // {
//     //     printf("Invalid Numbers");
//     // }
//     switch (marks)
//     {
//     case 90 ... 100:
//         printf("Grade : A\n");
//         printf("GPA : 4.0");
//         break;
//     case 80 ... 89:
//         printf("Grade : B\n");
//         printf("GPA : 3.0");
//         break;
//     case 70 ... 79:
//         printf("Grade : C\n");
//         printf("GPA : 2.0");
//         break;
//     case 60 ... 69:

//         printf("Grade : D\n");
//         printf("GPA : 1.0");
//         break;
//     case 0 ... 59:
//         printf("Grade : F\n");
//         printf("GPA : 0.0");
//         break;
//     default:
//         printf("Invalid Numbers");
//     }
// }

// 🔢 Problem 5 — Odd/Even & Positive/Negative (Lec 3 + 4)
// Topic: Modulus operator, logical operators, nested if
// Write a C program that takes an integer as input and prints:

// Whether it is odd or even
// Whether it is positive, negative, or zero
// Whether it is both odd and positive (using &&)

// #include <stdio.h>
// int main()
// {

//     int a;
//     printf("Enter an Integer number : ");
//     scanf("%d", &a);
//     // Whether it is odd or even
//     if (a % 2 == 0)
//     {
//         printf("It's an Even Number");
//     }
//     else
//     {
//         printf("It's an Odd number");
//     }
//     // Whether it is positive, negative, or zero

//     if (a < 0)
//     {
//         printf("\nIt's a Negative Number");
//     }
//     else if (a > 0)
//     {
//         printf("\nIt's a Positive Number");
//     }
//     else
//     {
//         printf("\nIt's a Zero");
//     }

//     // Whether it is both odd and positive (using &&)
//     if (a % 2 != 0 && a > 0)
//     {
//         printf("\nIt's both odd and positive");
//     }
//     else
//     {
//         printf("\nIt's not both odd and positive");
//     }
//     return 0;
// }

// 🔢 Problem 6 — Simple Menu with Switch (Lec 2 + 4)
// Topic: char/int variables, switch-case, constants
// Write a C program that displays a menu for a shop:
// 1. Tea   - 20 BDT
// 2. Coffee - 40 BDT
// 3. Juice - 35 BDT
// Take the user's choice (1, 2, or 3) and quantity as input, then print the total bill. Use switch-case and a const price for each item.

// #include <stdio.h>
// int main()
// {
//     const int TEA_PRICE = 20;
//     const int COFFEE_PRICE = 40;
//     const int JUICE_PRICE = 35;
//     int choice, quantity;
//     printf("Welcome to the Shop! Please select an item:\n");
//     printf("1. Tea   - 20 BDT\n");
//     printf("2. Coffee - 40 BDT\n");
//     printf("3. Juice - 35 BDT\n");
//     printf("Enter your choice (1, 2, or 3): ");
//     scanf("%d", &choice);
//     printf("Enter the quantity: ");
//     scanf("%d", &quantity);
//     int total_bill;
//     switch (choice)
//     {
//     case 1:
//         total_bill = TEA_PRICE * quantity;
//         printf("Total bill for Tea: %d BDT\n", total_bill);
//         break;

//     case 2:
//         total_bill = COFFEE_PRICE * quantity;
//         printf("Total bill for Coffee: %d BDT\n", total_bill);
//         break;

//     case 3:

//         total_bill = JUICE_PRICE * quantity;
//         printf("Total bill for Juice: %d BDT\n", total_bill);
//         break;
//     default:
//         printf("Invalid choice! Please select 1, 2, or 3.\n");
//     }
// }

// 🔢 Problem 7 — Multiplication Table (Lec 2 + 3 + 5)
// Topic: Variables, arithmetic, for loop
// Write a C program that takes an integer n as input and prints its multiplication table from 1 to 10 using a for loop.
// Expected output for n = 5:
// 5 x 1 = 5
// 5 x 2 = 10
// ...
// 5 x 10 = 50

// #include <stdio.h>
// int main()
// {
//     int n, multiple;
//     printf("Enter the integer number : ");
//     scanf("%d", &n);
//     for (int i = 1; i <= 10; i++)
//     {
//         multiple = 1;
//         multiple = n * i;
//         printf("%d X %d = %d \n", n, i, multiple);
//     }

//     return 0;
// }

// 🔢 Problem 8 — Sum of Digits(Lec 2 + 3 + 5)
//     Topic : Modulus &division operators,
//             while loop
//             Write a C program that takes a positive integer as input and computes the sum of its digits using a while loop.

//             Example : Input 1234 → Output Sum = 10

// #include <stdio.h>
// int main()
// {
//     int number, sum = 0, digit;
//     printf("Enter a positive integer : ");
//     scanf("%d", &number);
//     while (number > 0)
//     {
//         /* code */
//         digit = number % 10;
//         sum += digit;
//         number /= 10;
//     }
//     printf("Sum of the digits is : %d", sum);
//     return 0;
// }

// 🔢 Problem 9 — Prime Number Checker (Lec 3 + 4 + 5)
// Topic: Modulus operator, for loop, if-else, flag variable
// Write a C program that takes a positive integer n as input and determines whether it is prime or not. Use a for loop from 2 to n-1 and a flag variable (int). Print "Prime" or "Not Prime".

// #include <stdio.h>
// int main()
// {
//     int n, flag = 0;
//     printf("Enter a positive integer : ");
//     scanf("%d", &n);
//     if (n <= 1)
//     {
//         printf("Not Prime Number");
//     }
//     else
//     {
//         for (int i = 2; i <= n / 2; i++)
//         {
//             if (n % i == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             printf("Prime Number");
//         }
//         else
//         {
//             printf("Not Prime Number");
//         }
//     }
// }

// 🔢 Problem 10 — Number Pattern with Loops & Conditions (Lec 3 + 4 + 5)
// Topic: Nested for loops, if-else, arithmetic operators, unary operators
// Write a C program using nested for loops to print the following pattern for n = 5:

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
            {
                printf("%d ", j);
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}