#include <stdio.h>

int main() {
    FILE *file_pointer;
    char line[100];
char p[100]="headmain.txt";
    file_pointer = fopen(p, "r"); // Open file in read mode
    if (file_pointer == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    while (fgets(line, 100, file_pointer) != NULL) { // Read each line of file
        printf("%s", line); // Print each line to console
    }

    fclose(file_pointer); // Close file
    return 0;
}
