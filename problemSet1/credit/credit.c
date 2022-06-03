#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long digits;
    do
    {
        digits = get_long("Type your card digits: ");
    }
    while (digits < 0);

    long cardNum = digits;
    int total = 0;

    // First case
    while (cardNum > 0)
    {
        int lastDigit = cardNum % 10;
        total += lastDigit;
        cardNum /= 100;
    }

    // Second case
    cardNum = digits / 10;
    while (cardNum > 0)
    {
        int lastDigit = cardNum % 10;
        int digitByTwo = lastDigit * 2;
        total += (digitByTwo % 10) + (digitByTwo / 10);
        cardNum = cardNum / 100;
    }

    // If the last digit in the total sum is 0, the card is valid else INVALID
    if ((total % 10) != 0)
    {
        printf("%s\n", "INVALID");
        return 0;
    }

    int length = 0;
    cardNum = digits;
    long visa = cardNum;
    long amex = cardNum;
    long master = cardNum;
    // To differenciate between VISA, Master and American Express(AMEX) using length of the digits
    while (cardNum > 0)
    {
        cardNum = cardNum / 10;
        length++;
    }

    // For VISA card (have 13 or 16 digits and digit starts with 4)
    // Divide the digits by 10 until a single digit is left then check if it's 4 for Visa
    while (visa >= 10)
    {
        visa /= 10;                                 // visa = visa / 10;
    }
    if ((length == 13 || length == 16) && visa == 4)
    {
        printf("%s\n", "VISA");
        return 0;
    }

    // For American Express AMEX (have 15 digits and digits starts with 34 or 37)
    // Divide the 15 digits by 10 ^ 13 to find the first 2 digits, then check for 34 or 37
    while (amex >= pow(10, 13))
    {
        amex /= pow(10, 13);
    }
    if (length == 15 && (amex == 34 || amex == 37))
    {
        printf("%s\n", "AMEX");
        return 0;
    }

    // For Mastercard (have 16 digits and digits starts with  51 or 52 or 53 or 54 or 55)
    // Divide the 16 digits by 10 ^ 14 to find the first 2 digits, the check for Mastercard
    while (master >= pow(10, 14))
    {
        master /= pow(10, 14);
    }
    if (length == 16 && (master == 51 || master == 52 || master == 53 || master == 54 || master == 55))
    {
        printf("%s\n", "MASTERCARD");
        return 0;
    }
    else
    {
        printf("%s\n", "INVALID");
    }
     return 0;
}




// #include <cs50.h>
// #include <stdio.h>
// #include <math.h>

// int main(void)
// {
//     long digits;
//     do
//     {
//         digits = get_long("Type your card digits: ");
//     }
//     while (digits < 0);

//     // TO FIND THE LAST DIGIT OF A STRING OF NUMBERS
//     // We use the modulo (%) operator to get remainder of a division of numbers by 10.
//     // Number % 10 = last digit of that number. 125 % 10 = 5; 50 % 10 = 0; 4298 % 10 = 8.
//     // TO FIND THE SECOND-LAST DIGIT OF A STRING OF NUMBERS
//     // We use % to get te remainder of a division of numbers by 100, then divide the remainder by 10
//     // (Number % 100) / 10 = 2nd last digit of that number. 4298 % 100 = 98 / 10 = 9
//     // TO FIND THE FOURTH LAST DIGITS OF A STRING OF NUMBERS
//     // (Number % 10000) / 1000 = 4th last digit of that number. 4298 % 10000 = 4298 / 1000 = 4


//     // Now to initialize the 2nd to the last digits in a 16 digits card
//     int digit15, digit13, digit11, digit9, digit7, digit5, digit3, digit1;

//     // LUHN's algorithm
//     // Multiply by 2 second-last digit and subsequent digits in steps of 2
//     digit15 = ((digits % 100) /10) * 2;
//     digit13 = ((digits % 10000) /1000) * 2;
//     digit11 = ((digits % 1000000) /100000) * 2;
//     digit9 = ((digits % 100000000) /10000000) * 2;
//     digit7 = ((digits % 10000000000) /1000000000) * 2;
//     digit5 = ((digits % 1000000000000) /100000000000) * 2;
//     digit3 = ((digits % 100000000000000) /10000000000000) * 2;
//     digit1 = ((digits % 10000000000000000) /1000000000000000) * 2;

//     // Add the result of each digit multiplied by 2 above together. 6 * 2 = 12 but add 1 and 2 together to give 3
//     digit15 = ((digit15 % 100) / 10) + (digit15 % 10);
//     digit13 = ((digit13 % 100) / 10) + (digit13 % 10);
//     digit11 = ((digit11 % 100) / 10) + (digit11 % 10);
//     digit9 = ((digit9 % 100) / 10) + (digit9 % 10);
//     digit7 = ((digit7 % 100) / 10) + (digit7 % 10);
//     digit5 = ((digit5 % 100) / 10) + (digit5 % 10);
//     digit3 = ((digit3 % 100) / 10) + (digit3 % 10);
//     digit1 = ((digit1 % 100) / 10) + (digit1 % 10);

//     int sum1 = digit15 + digit13 + digit11 +digit9 + digit7 + digit5 + digit3 +digit1;
//     printf("%i\n", sum1);
//     // Find the digits not multiplied by 2. From last digit and digits in steps of 2
//     int digit16, digit14, digit12, digit10, digit8, digit6, digit4, digit2;

//     digit16 = (digits % 10);
//     digit14 = (digits % 1000) / 100;
//     digit12 = (digits % 100000) / 10000;
//     digit10 = (digits % 10000000) / 1000000;
//     digit8 = (digits % 1000000000) / 100000000;
//     digit6 = (digits % 100000000000) / 10000000000;
//     digit4 = (digits % 10000000000000) / 1000000000000;
//     digit2 = (digits % 1000000000000000) / 100000000000000;

//     int sum2 = digit16 + digit14 + digit12 + digit10 + digit8 + digit6 + digit4 + digit2;
//     printf("%i\n", sum2);
//     // Add the sum2 to the other sum1
//     int total = sum1 + sum2;
//     printf("%i\n", total);

//     int length = 0;
//     long visa = digits;
//     long amex = digits;
//     long master = digits;

//     // If the last digit in the total sum is 0, the card is valid else INVALID
//     if ((total % 10) != 0)
//     {
//         printf("%s\n", "INVALID");
//         return 0;
//     }

//     // To differenciate between VISA, Master and American Express(AMEX) using length of the digits
//     while (digits > 0)
//     {
//         digits = digits / 10;
//         length++;
//     }

//     // For VISA card (have 13 or 16 digits and digit starts with 4)
//     // Divide the digits by 10 until a single digit is left then check if it's 4 for Visa
//     while (visa >= 10)
//     {
//         visa /= 10;                                 // visa = visa / 10;
//     }
//     if ((length == 13 || length == 16) && visa == 4)
//     {
//         printf("%s\n", "VISA");
//         return 0;
//     }

//     // For American Express AMEX (have 15 digits and digits starts with 34 or 37)
//     // Divide the 15 digits by 10 ^ 13 to find the first 2 digits, then check for 34 or 37
//     while (amex >= pow(10, 13))
//     {
//         amex /= pow(10, 13);
//     }
//     if (length == 15 && (amex == 34 || amex == 37))
//     {
//         printf("%s\n", "AMEX");
//         return 0;
//     }

//     // For Mastercard (have 16 digits and digits starts with  51 or 52 or 53 or 54 or 55)
//     // Divide the 16 digits by 10 ^ 14 to find the first 2 digits, the check for Mastercard
//     while (master >= pow(10, 14))
//     {
//         master /= pow(10, 14);
//     }
//     if (length == 16 && (master == 51 || master == 52 || master == 53 || master == 54 || master == 55))
//     {
//         printf("%s\n", "MASTERCARD");
//         return 0;
//     }
//     else
//     {
//         printf("%s\n", "INVALID");
//     }
//      return 0;
// }