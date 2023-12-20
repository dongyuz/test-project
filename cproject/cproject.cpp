// cproject.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "Hello.h"

// TODO: This is an example of a library function
bool is_power_of_two(int n)
{
   if (n < 0)
      return false;

   return (n & (n - 1)) == 0;
}

int multiply_by_two(int n)
{
   return n << 1;
}

int divide_by_two(int n)
{
   return n >> 1;
}