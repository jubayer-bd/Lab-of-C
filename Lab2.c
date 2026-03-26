// Conditional Operator: -------------
// 1. Find out if a number is odd or even using a conditional operator.

#include<stdio.h> 
int main () {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0) 
    printf("%d is an even number.", num);
    else
    printf("%d is an odd number.", num);
    return 0;
}

// 2. Find out the largest between three numbers using the conditional operator.

#include<stdio.h>
int main() {
    int num1, num2, num3;
printf("Enter three numbers: ");
scanf("%d %d %d", &num1, &num2, &num3);
if(num1 > num2 && num1 > num3) 
printf("%d is the largest number.", num1);
else if (num2 > num1 && num2 > num3) 
printf("%d is the largest number.", num2);
else if(num3 > num1 && num3> num2) 
printf("%d is the largest number.", num3);

else printf("Either all numbers are equal or two of them are equal and greater than the third one.");
   
    return 0;
}

// 3. Find out if the input is an alphabet using a conditional operator.

#include<stdio.h> 
int main () {
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    if(((character >= 'a' && character <='z') || (character >= 'A' && character <= 'Z'))) 
    printf("%c is an alphabet.", character);
    else    
    printf("%c is not an alphabet.", character);
    return 0;
}