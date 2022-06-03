// #include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long digits;
    do
    {
        // digits = get_long("Type your card digits: ");
        printf("Type your card details: ");
        scanf("%ld", &digits);
    }
    while (digits < 0);

    long cardNum = digits;
    int total = 0;

    // Applying Luhn's algorithm
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