#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    int spec;
   char url[100];
   char pap[10000];
   struct node * link;
}*NODE;
NODE getnode()
{
  NODE x;
  x=(NODE)malloc(sizeof(struct node));
  if(x==NULL)
  {
    printf("Memory not Allocated\n");
    exit(0);
  }
  return x;
}

int urlopener(NODE c){
NODE p=getnode();
p=c;

//char command[50] = "start chrome https://www.youtube.com";
char command[50];
strcpy(command,p->url);
printf("Opening youtube.com from terminal in 5 sec\n");
printf("%s",command);
system(command);
}
int main(){
    NODE first;
    first=getnode();
    strcpy(first->url,"start chrome https://www.youtube.com");
    urlopener(first);
}