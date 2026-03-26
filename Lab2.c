// Conditional Operator: -------------
// 1. Find out if a number is odd or even using a conditional operator.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is an even number.", num);
    else
        printf("%d is an odd number.", num);
    return 0;
}

// 2. Find out the largest between three numbers using the conditional operator.

#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > num2 && num1 > num3)
        printf("%d is the largest number.", num1);
    else if (num2 > num1 && num2 > num3)
        printf("%d is the largest number.", num2);
    else if (num3 > num1 && num3 > num2)
        printf("%d is the largest number.", num3);

    else
        printf("Either all numbers are equal or two of them are equal and greater than the third one.");

    return 0;
}

// 3. Find out if the input is an alphabet using a conditional operator.

#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if (((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')))
        printf("%c is an alphabet.", character);
    else
        printf("%c is not an alphabet.", character);
}

// 3. If the ages of Arif, Fahmid and Joy are input through the keyboard, write a program to
// determine the youngest of the three.

#include <stdio.h>
int main()
{
    int ageArif, ageFahmid, ageJoy;
    printf("Enter the ages of Arif, Fahmid and Joy: ");
    scanf("%d %d %d", &ageArif, &ageFahmid, &ageJoy);
    if (ageArif < ageFahmid && ageArif < ageJoy)
        printf("Arif is the youngest with age %d.", ageArif);
    else if (ageFahmid < ageArif && ageFahmid < ageJoy)
        printf("Fahmid is the youngest with age %d.", ageFahmid);
    else if (ageJoy < ageArif && ageJoy < ageFahmid)
        printf("Joy is the youngest with age %d.", ageJoy);
    else
        printf("Either all ages are equal or two of them are equal and less than the third one.");

    return 0;
}

// 4. Write a program to find if a character entered by user is upper case or not.
#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if (character >= 'A' && character <= 'Z')
        printf("%c is an upper case letter.", character);
    else
        printf("%c is not an upper case letter.", character);

    return 0;
}

// 5. Write a C program to input marks of five subjects Physics, Chemistry, Biology,
// Mathematics and Computer, calculate their grade according to given conditions:
//             If percentage &gt;= 90: Grade A
//             If percentage &gt;= 80: Grade B
//             If percentage &gt;= 70: Grade C
//             If percentage &gt;= 60: Grade D
//             If percentage &gt;= 40: Grade E
//             If percentage &lt; 40: Grade F

#include <stdio.h>
int main()
{
    float physics, chemistry, biology, mathematics, computer, percentage;
    printf("Enter marks of Physics, Chemistry, Biology, Mathematics and Computer: ");
    scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &mathematics, &computer);
    percentage = (physics + chemistry + biology + mathematics + computer) / 5;
    if (percentage >= 90)
        printf("Grade A");
    else if (percentage >= 80)
        printf("Grade B");
    else if (percentage >= 70)

        printf("Grade C");
    else if (percentage >= 60)

        printf("Grade D");
    else if (percentage >= 40)
        printf("Grade E");
    else if (percentage < 40)
        printf("Grade F");
    return 0;
}