// Conditional Operator: -------------
// 1. Write a C program to find out if a number is odd or even.

// #include <stdio.h>
// int main()
// {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num % 2 == 0)
//         printf("%d is an even number.\n", num);
//     else
//         printf("%d is an odd number.\n", num);
//     return 0;
// }

// 2. Write a C program to input a character from the user and check whether the given
// character is alphabet or not an alphabet using if else.

// #include <stdio.h>
// int main()
// {
//     char character;
//     printf("Enter a character: ");
//     scanf("%c", &character);
//     if (((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')))
//         printf("%c is an alphabet.\n", character);
//     else
//         printf("%c is not an alphabet.\n", character);
//     return 0;
// }

// 3. If the ages of Arif, Fahmid and Joy are input through the keyboard, write a program to
// determine the youngest of the three.

// #include <stdio.h>
// int main()
// {
//     int ageArif, ageFahmid, ageJoy;
//     printf("Enter the ages of Arif, Fahmid and Joy: \n");
//     scanf("%d %d %d", &ageArif, &ageFahmid, &ageJoy);
//     if (ageArif < ageFahmid && ageArif < ageJoy)
//         printf("Arif is the youngest with age %d.\n", ageArif);
//     else if (ageFahmid < ageArif && ageFahmid < ageJoy)
//         printf("Fahmid is the youngest with age %d.\n", ageFahmid);
//     else if (ageJoy < ageArif && ageJoy < ageFahmid)
//         printf("Joy is the youngest with age %d.\n", ageJoy);
//     else
//         printf("Either all ages are equal or two of them are equal and less than the third one.\n");

//     return 0;
// }

// 4. Write a program to find if a character entered by user is upper case or not.
// #include <stdio.h>
// int main()
// {
//     char character;
//     printf("Enter a character: ");
//     scanf("%c", &character);
//     if (character >= 'A' && character <= 'Z')
//         printf("%c is an upper case letter.\n", character);
//     else
//         printf("%c is not an upper case letter.\n", character);

//     return 0;
// }

// 5. Write a C program to input marks of five subjects Physics, Chemistry, Biology,
// Mathematics and Computer, calculate their grade according to given conditions:
//             If percentage &gt;= 90: Grade A
//             If percentage &gt;= 80: Grade B
//             If percentage &gt;= 70: Grade C
//             If percentage &gt;= 60: Grade D
//             If percentage &gt;= 40: Grade E
//             If percentage &lt; 40: Grade F

// #include <stdio.h>
// int main()
// {
//     float physics, chemistry, biology, mathematics, computer, percentage;
//     printf("Enter marks of Physics, Chemistry, Biology, Mathematics and Computer: \n");
//     scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &mathematics, &computer);
//     percentage = (physics + chemistry + biology + mathematics + computer) / 5;
//     if (percentage >= 90)
//         printf("Grade A\n");
//     else if (percentage >= 80)
//         printf("Grade B\n");
//     else if (percentage >= 70)
//         printf("Grade C\n");
//     else if (percentage >= 60)
//         printf("Grade D\n");
//     else if (percentage >= 40)
//         printf("Grade E\n");
//     else
//         printf("Grade F\n");

//     return 0;
// }

#include <stdio.h>
int main()
{
int x = 5;
printf("%d %d %d", x, x++, x);
return 0;
}