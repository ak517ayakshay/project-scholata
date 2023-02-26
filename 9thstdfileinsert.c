#include <stdio.h>

int main() {
   FILE *file_ptr;
   char text[5000] = "\n\n\n\n\t\t\t\t\t\t\tDBS SCHOLARSHIP PROGRAM\n\nDBS Scholarship Program is an initiative of DBS Bank to provide financial assistance to school-level children of police personnel and help them continue their education. Under this scholarship program, students from Tamil Nadu, Karnataka, Kerala, Andhra Pradesh, Telangana, and Puducherry who are currently enrolled in Class 9 or 10 will receive a scholarship of INR 20,000 each year for a period of 3 years (up to Class 12)\n\nABOUT THE PROGRAM:\nDBS Scholarship Program is an initiative of DBS Bank to provide financial assistance to school-level children of police personnel and help them continue their education. Under this scholarship program, students from Tamil Nadu, Karnataka, Kerala, Andhra Pradesh, Telangana, and Puducherry who are currently enrolled in Class 9 or 10 will receive a scholarship of INR 20,000 each year for a period of 3 years (up to Class 12).\n\nELIGIBLITY:\n1)Applicants must be children of police personnel (Sub-Inspector and below ranks).\n2)Applicants must be residents of the following states in India  - Tamil Nadu, Karnataka, Kerala, Andhra Pradesh, Telangana and Puducherry.\n3)Applicants must be currently pursuing school education in class 9\n4)Children of employees of DBS Bank, Buddy4Study and their subsidiaries are not eligible to apply.\n\n\n\n";

   // Open the file for writing
   file_ptr = fopen("9thinsertaky.txt", "w");

   // Write the text to the file
   fprintf(file_ptr, "%s",text);

   // Close the file
   fclose(file_ptr);
   
   return 0;
}
