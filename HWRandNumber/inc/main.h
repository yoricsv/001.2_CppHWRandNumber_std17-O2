#pragma once

#ifndef MAIN_H
#define MAIN_H

#ifdef _MSC_VER
    #define _CRT_SECURE_NO_WARNINGS
#endif

#include <unistd.h>
#include <cstdio>
#include <cstdlib>

constexpr auto word   = "Enter your number in range 0 to 99\n";
constexpr auto err    = "There's somthing wrong! Please, try arain\n";
constexpr auto answer = "Good, your number is: ";

#ifndef USE_GET_LENGTH_FUNCTION

    int print(const char * str, int length)
    {
        return write(STDOUT_FILENO, str, length);
    }

#else

    int getStringLength(const char * string)
    {
        int counter = 0;

        while (string[counter] != '\0')
        {
            counter++;
        }

        return counter;
    }

    int print(const char * str)
    {
        return write(STDOUT_FILENO, str, getStringLength(str));
    }

#endif

void print (int number)
{
    unsigned int result = 0,
                 n      = 0;

    while (number != 0)
    {
         result = result * 10 + n % 10;

         putchar(result);
         n /=10;
    }
}

int getNumber()
{
    char * character = nullptr;
    int    number    = 0;

    gets(character);
    number = putchar(reinterpret_cast<int>(character));

    return number;

//    if(0 <= number || number <= 99)

}

bool isPositive(int number)
{
    return  (number != 0) | (number >> (sizeof(int)*8-1));
}


#endif // MAIN_H