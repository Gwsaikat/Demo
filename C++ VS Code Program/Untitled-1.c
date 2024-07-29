#include <stdio.h>
int main() 
{ 
int number, sum = 0, digit;
          // Prompt the user for input
      printf("Enter an integer: ");
           scanf("%d", &number);
     // Make a copy of the number to preserve the original value for output
int originalNumber = number;
         // Calculate the sum of the digits
while (number > 0) 
{
digit = number % 10; // Extract the last digit
sum += digit;        // Add the digit to the sum
number /= 10;        // Remove the last digit from the number
}

          // Output the result
           printf("The sum of the digits of %d is: %d\n", originalNumber, sum);
return 0;
}
