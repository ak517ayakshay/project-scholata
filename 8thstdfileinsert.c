#include <stdio.h>

int main() {
   FILE *file_ptr;
   char text[5000] = " \n\n\n\n\t\t\t\t\t\tSCHOLARSHIP 2023 BY KOTAK MAHINDRA BANK \n\n Scholarship 2023 by Kotak Mahindra Bank Limited is a CSR project on ‘Education and Livelihood’, to provide financial assistance to students who are residents of Tamil Nadu and belong to underprivileged sections of society. The scholarship is to help them to continue their higher education after passing class 12/Higher Secondary Education.\n\n ABOUT THE PROGRAM:\nScholarship amount of up to INR 2 lakh* per year or the actual expenses incurred towards college fees, college hostel fees, study material, laptop, etc. (against valid receipts) will be given to each selected scholar till completion of their graduation courses. \n\nELIGIBLITY:\n1)Open for students who are domiciles of Tamil Nadu\n2)Applicants must be enrolled in the first year of graduation at institutes of repute (NIRF accredited) in the fields of Engineering, Medical (MBBS) and integrated Law.\n3)Applicant’s annual family income must be less than or equal to INR 5,00,000.\n4)Children of employees of Kotak and Buddy4Study are not eligible to apply.\n\n\n\n";

   // Open the file for writing
   file_ptr = fopen("8thinsertaky.txt", "w");

   // Write the text to the file
   fprintf(file_ptr, "%s", text);

   // Close the file
   fclose(file_ptr);
   
   return 0;
}
