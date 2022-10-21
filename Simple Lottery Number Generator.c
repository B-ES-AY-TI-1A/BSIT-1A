/*******************************************************************************
*
* Lottery Number Generator
*
* Example of generating lottery numbers in C.
*
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Generate 6 random numbers between 1-59 with no repeating values, the same with a real
// lottery system that will use 59 balls.
// Example: 22 6 20 3 19 2
//
int main()
{
  // srand = provide a random seed number generator
  //(time(NULL)) = will return current time so it gives different time, seed, and numbers
  // when we run the program.
  srand( time(NULL) );

  int RandomNumber;
  int RandomNumbers[6];  // keeps track of the numbers generated so far
  bool unique;

  // gives and print the 6 numbers if i is less than 6
  for (int i = 0; i < 6; i++)
  {
    // gives a number that is unique
    do
    {
      // we will use %59 + 1 because it gives a random number between 1-59
      // because if we use %60 it will give numbers between 0-60.
      RandomNumber = (rand() % 59) + 1;

      // will assume all of the numbers given are unique but
      // will also check if it is not unique
      unique = true;
      for (int k = 0; k < i; k++)
        if (RandomNumbers[k] == RandomNumber) unique = false;

    // will still give numbers as long as the given number is not unique
    } while (!unique);

    // add the number to the RandomNumbers array and will Output it
    // RandomNumber 1, RandomNumber 2 .... RandomNumber 6
    RandomNumbers[i] = RandomNumber;
    printf("RandomNumber %d: %d\n", i+1, RandomNumber);
  }

  return 0;
}
