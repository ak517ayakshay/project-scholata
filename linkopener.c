#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int urlopener(){
char command[50] = "start chrome https://www.youtube.com";
printf("Opening youtube.com from terminal in 5 sec\n");
system(command);
}