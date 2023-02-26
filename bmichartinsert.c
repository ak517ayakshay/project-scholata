#include <stdio.h>

int main() {
   FILE *file_ptr;
   char text[5000] = " \n\n\n\n\t\t\t   BMI CHART\n\n\tBMI\t\t\t|\t\tFEEDBACK\n <16\t\t\t\t\tunderweight\n 18.4<BMI<22\t\t\t\thealthy\n >22\t\t\t\t\toverweight";

   // Open the file for writing
   file_ptr = fopen("bmichartinsert.txt", "w");

   // Write the text to the file
   fprintf(file_ptr, "%s", text);

   // Close the file
   fclose(file_ptr);
   
   return 0;
}
