#include <stdio.h>
// Example output for input: 5
//      0  1  2  3  4  5
//    +------------------
// 0  | 0  0  0  0  0  0
// 1  | 0  1  2  3  4  5
// 2  | 0  2  4  6  8  10
// 3  | 0  3  6  9  12 15
// 4  | 0  4  8  12 16 20

int main() {
   int number; // stores user input
   // display welcome message
   printf("Welcome to Multiplication Table Generator!\n");
   // prompt user for input
   printf("Please enter integer value: ");
   // read and store input
    scanf("%d", &number);
    // displays output, indicates which table will be made
    printf("Calculating Multiplication Table for... %d\n", number);
    printf("      "); // top row, left hand spacing

    // loop through top row integers
   for(int i = 0; i <= number; i++){
      printf("%d  ", i);
   }
   printf("\n"); // increment to border row (+-----)
   printf("    +"); // border row, left hand spacing
   for(int i = 0; i <= number; i++){
      printf("---");
   }
   printf("\n"); // increment to 0 row

   return 0;
}
