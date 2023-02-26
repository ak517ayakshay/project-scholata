#include <stdio.h>

int main() {
   FILE *file_ptr;
   char text[5000] = "\n\n\n----------------------------------SCHOLATA---------------------------------------\n\n\tCLASS\t\t|\t\tCATEGORY\n------------------------------------------\n class 8\t\t\t1(enter 1 if u belong here)\n class 9\t\t\t2(enter 2 if u belong here)\n class 10\t\t\t3(enter 3 if u belong here)\n class11&12\t\t\t4(enter 4 if u belong here)\n degree\t\t\t\t5(enter 5 if u belong here)\n sports\t\t\t\t6(enter 6 if u belong here)\n\n\n\n";

   // Open the file for writing
   file_ptr = fopen("headmain.txt", "w");

   // Write the text to the file
   fprintf(file_ptr, "%s",text);

   // Close the file
   fclose(file_ptr);
   
   return 0;
}
