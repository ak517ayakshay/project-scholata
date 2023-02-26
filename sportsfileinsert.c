#include <stdio.h>

int main() {
   FILE *file_ptr;
   char text[5000] = "\n\n\n\n\t\t\t\t\t\t\t\t\tSPORTS SCHOLARSHIP PROGRAM\n\nWhether you are a talented athlete looking for a full-ride scholarship to your dream college or you are more of a club sport athlete looking to play at a more recreational level, there are scholarships for both types, and everyone in-between. Based on your sport, there may be more or less competition which will affect the amount of scholarship money and awards that can be disbursed. For high-visibility sports such as football or basketball, it may be harder to break into a program and land a full-ride scholarship. Even though college and universities are the most sought-out for athletic scholarships, there are organizations and businesses that reward student-athletes. Know your skill, worth, and do your research when looking into possible athletic scholarships\n\nELIGIBLITY:\n1)Applicants must be children of police personnel (Sub-Inspector and below ranks).\n2)Applicants must be residents of the following states in India  - Tamil Nadu, Karnataka, Kerala, Andhra Pradesh, Telangana and Puducherry.\n3)Applicants must be currently pursuing school education in class 9\n4)The BMI of the students must atleast be 18.5 and must not exceed 22.\n\n\n\n";

   // Open the file for writing
   file_ptr = fopen("sportsinsertaky.txt", "w");

   // Write the text to the file
   fprintf(file_ptr, "%s",text);

   // Close the file
   fclose(file_ptr);
   
   return 0;
}
