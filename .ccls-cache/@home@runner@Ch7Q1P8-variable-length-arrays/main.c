// Generate Fibonacci numbers using variable length arrays

#include <stdio.h>

int main(void) {

  int i, numFibs;

  // Get number of fibonacci numbers
  printf ("How many Fibonacci numbers do you want (between 1 and 75)? ");
  scanf ("%d", &numFibs);

  // Test input (1 - 75)
  if (numFibs < 1 || numFibs > 75) {
    printf ("Bad number, sorry!\n");
    return 1;
  }

  unsigned long long int Fibonacci[numFibs];

  // Define first two fibonacci numbers
  Fibonacci[0] = 0;
  Fibonacci[1] = 1;

  // Generate fibonacci numbers up to numFibs
  for (i = 2; i < numFibs; i++) 
    Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

  // Print the fibonacci numbers up to numFibs
  for (i = 0; i < numFibs; i++)
    printf ("%llu  ", Fibonacci[i]);

  printf ("\n");
  
  return 0;
}