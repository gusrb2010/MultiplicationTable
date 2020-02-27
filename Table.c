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
    printf("     "); //  top row, left hand spacing, 5 spaces

    // loop through top row integers
   for(int i = 0; i <= number; i++){
      printf("%d  ", i);
   }
   printf("\n"); // increment to border row (+-----)
   printf("   +"); //  border row, left hand spacing, 3 spaces
   for(int i = 0; i <= number; i++){
      printf("---");
   }
   printf("\n"); // increment to 0 row
   // iterate through remaining rows
   for(int i = 0; i <= number; i++){
      // iterate through columns of each row
      for(int j = 0; j <= number; j++){
         int result = i*j;
         // handle first column
         if(j == 0){
            printf("%d", i);
            printf("  | ");
            printf("%d  ",result);
         }
         // handle all remaining columns
         else{ 
            // manage spacing for 2-digit ints
            if(result < 10){
               printf("%d  ", result);
            }
            else{
               printf("%d ", result);
            }
         }
      }
      printf("\n"); // increment to next row
   }

   return 0;
}
