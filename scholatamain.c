#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    int spec;
   char url[100];
   char pap[10000];
   struct node * link;
}*NODE;
typedef
struct node1
{
    char subject[10];
    int marks;
    int credit;
     struct node1 *link;
}*NODEx;

NODEx getNode1()
{
    NODEx x=NULL;
    x=(NODEx)malloc(sizeof(struct node1));
    if(x==NULL)
    {
        printf("Memory isn't allocated \n");
        exit(0);
    }
    return x;
}

void insert_r(NODEx head,char a[10],int credit,int marks)
{
NODEx temp,cur=head;
temp=getNode1();

strcpy(temp->subject,a);
temp->credit=credit;
temp->marks=marks;
temp->link=NULL;

 while(cur->link!=NULL)
 {
 cur=cur->link;
 }
cur->link=temp;

}



int cgpa(NODEx head)
{
    NODEx cur=head->link;
    int sum=0,sum1=0,sum2=0,sum3=0,sum4=0,total;

    while(cur!=NULL)
    {
      sum=sum+(cur->credit);
      cur=cur->link;
    }

    NODEx cur2=head->link;
    while(cur2!=NULL)
    {
      if(cur2->marks==0)
      {
       cur2=cur2->link;
        continue;
      }

      if(cur2->credit==4)
      {
       
        
        if(cur2->marks>=100)
        {
            cur2->marks=99;
        }
      
        sum1=sum1+(((cur2->marks)/10)+1)*4;
      }

      else if(cur2->credit==3)
  
      {
         if(cur2->marks>=100)
        {
            cur2->marks=99;
        }
       
        sum2=sum2+(((cur2->marks)/10)+1)*3;
      }

      else if(cur2->credit==2)
      {
        if(cur2->marks>=100)
        {
            cur2->marks=99;
        }
        sum3=sum3+(((cur2->marks)/10)+1)*2;
      }
      
      else 
      {
        if(cur2->marks>=100)
        {
            cur2->marks=99;
        }
        sum4=sum4+(((cur2->marks)/10)+1);
      }
      
      cur2=cur2->link;

    }
   
    total=sum1+sum2+sum3+sum4;
    float cgpa=(float)total/sum;
    printf("CGPA : %f\n",cgpa);
    return cgpa;

}

int cgpacalc()
{
    NODEx head;
    head=getNode1();
    head->link=NULL;

    
    int i,n,credit,marks;
    char a[10];
    printf("enter the no. of subjects in your semester\n");
    scanf("%d",&n);
    
    while(n--)
    {
        printf("enter your subject\n");
        scanf("%s",a);
        printf("enter the marks of the subject\n");
        scanf("%d",&marks);
        printf("enter the credits of this subject\n");
        scanf("%d",&credit);
       insert_r(head,a,credit,marks);
    }
    
  int x1 = cgpa(head);
    return x1;
}
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
void display(NODE Temp) {
  NODE y=getnode();
  y=Temp;
    FILE *file_pointer;
    char line[10000];
   // printf("jj");
  //  printf("%d",y->spec);
//char p[100]="11th12thinsertaky.txt";
    file_pointer = fopen(y->pap, "r"); 
    if (file_pointer == NULL) {
        printf("Failed to open file.\n");
       // return 0;
    }

    while (fgets(line, 10000, file_pointer) != NULL) {
        printf("%s", line); 
    }

    fclose(file_pointer); 
   // return 0;
}


void insert(NODE first,NODE second,NODE third,NODE fourth,NODE fifth,NODE sixth){
 first->spec=1;
 strcpy(first->pap,"8thinsertaky.txt");
  first->link=second;
  strcpy(first->url,"start chrome https://www.buddy4study.com/");
  second->spec=2;
  strcpy(second->pap,"9thinsertaky.txt");
  second->link=third;
  strcpy(second->url,"start chrome https://www.buddy4study.com/");
  third->spec=3;
  strcpy(third->pap,"10thinsertaky.txt");
  third->link=fourth;
 strcpy(third->url,"start chrome https://www.buddy4study.com/");
  fourth->spec=4;
  strcpy(fourth->pap,"11th12thinsertaky.txt");

  strcpy(fourth->url,"start chrome https://www.buddy4study.com/");
  fourth->link=fifth;
  fifth->spec=5;
   strcpy(fifth->pap,"degreeinsertaky.txt");
  fifth->link=sixth;
 strcpy(fifth->url,"start chrome https://scholarships.gov.in");
// printf("jjdd");
sixth->spec=6;
sixth->link=NULL;
strcpy(sixth->url,"start chrome https://ongcindia.com");
strcpy(sixth->pap,"sportsinsertaky.txt");



}
int bmidisplay() {
    FILE *file_pointer;
    char line[100];
char p[100]="bmichartinsert.txt";
    file_pointer = fopen(p, "r"); 
    if (file_pointer == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    while (fgets(line, 100, file_pointer) != NULL) { 
        printf("%s", line);
    }

    fclose(file_pointer); 
    return 0;
}

int heading(){
   FILE *file_pointer;
    char line[100];

    file_pointer = fopen("headmain.txt", "r"); 
    if (file_pointer == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    while (fgets(line, 100, file_pointer) != NULL) { 
        printf("%s", line);
    }

    fclose(file_pointer);
    return 0;
}
float calc(){
  float sum,t;
printf("lets calculate now\n");
     printf("enter marks of all 10 subjects\n");
     for(int i=0;i<10;i++){
      scanf("%f",&t);
      sum=sum+t;
      t=0;
     }
     return sum;
}
int urlopener(NODE c){
NODE p=getnode();
p=c;

//char command[50] = "start chrome https://www.youtube.com";
char command[50];
strcpy(command,p->url);
//printf("Opening youtube.com from terminal in 5 sec\n");
//printf("%s",command);
system(command);
}
int solve(){
  //  printf("kk");
//input();
int ch,ch1,ch2,cu,bmic;
  float per;
  float sum,t;
NODE first1,second1,third1,fourth1,fifth1,sixth1,seventh1;
first1=getnode();
  second1=getnode();
  third1=getnode();
  fourth1=getnode();
  fifth1=getnode();
  sixth1=getnode();
heading();
 insert(first1,second1,third1,fourth1,fifth1,sixth1);

 // int a[2];
 printf("Enter your choice\n");
  scanf("%d",&ch);
  switch(ch){
    case 1:
    printf("Do u know your 8th class annual percentage?\n");
    printf("Enter 1 if u do else enter 2\n");
    scanf("%d",&ch1);
    if(ch1==1){
      printf("Enter your percentage\n");
      scanf("%f",&per);
    }
    if(ch1==2){
      sum=calc();
    
     per=sum/10;
    }
    
   // printf("sum%f",sum);
    //printf("per %f ",per);
    if(per>=80){
      printf("Congratulations you are applicable for scholarship\n");

    }
    else{
    printf("OOPS! you will not be able to take up our scholarship as our cutoff for it was 80 percent\n");
    exit(0);
    }
    printf("Enter 1 if you want to know about the scholarship and enter 2 to directly visit the link\n");
    scanf("%d",&ch2);
    if(ch2==1){
      display(first1);
      printf("Do you want to visit link of the scholarship website press 1 if want to");
      scanf("%d",&cu);
      if(cu==1){
         urlopener(first1);
      }
    }
    if(ch2==2){
      urlopener(first1);
    }
    break;

    case 2:

    printf("Do you know ur 9th class annual percentage?\n");
    printf("enter 1 if you do else enter 2\n");
    scanf("%d",&ch1);
    if(ch1==1){
      printf("Enter your percentage\n");
      scanf("%f",&per);
    }
    if(ch1==2){
      sum=calc();
    
     per=sum/10;
    }
    
   // printf("sum%f",sum);
    //printf("per %f ",per);
    if(per>=80){
      printf("Congratulations you are applicable for scholarship\n");

    }
    else{
    printf("OOPS! you will not be able to take up our scholarship as our cutoff for it was 80 percent\n");
    exit(0);
    }
    printf("Enter 1 if you want to know about the scholarship and enter 2 to directly visit the link\n");
    scanf("%d",&ch2);
    if(ch2==1){
      display(second1);
      printf("Do you want to visit link of the scholarship website press 1 if want to");
      scanf("%d",&cu);
      if(cu==1){
         urlopener(second1);
      }
    }
    if(ch2==2){
      urlopener(second1);
    }
    break;

    case 3:

    printf("Do you know ur 10th class annual percentage?\n");
    printf("Enter 1 if you do else enter 2\n");
    scanf("%d",&ch1);
    if(ch1==1){
      printf("Enter your percentage\n");
      scanf("%f",&per);
    }
    if(ch1==2){
      sum=calc();
    
     per=sum/10;
    }
    
   // printf("sum%f",sum);
    //printf("per %f ",per);
    if(per>=80){
      printf("Congratulations you are applicable for scholarship\n");

    }
    else{
    printf("OOPS! you will not be able to take up our scholarship as our cutoff for it was 80 percent\n");
    exit(0);
    }
    printf("Enter 1 if you want to know about the scholarship and enter 2 to directly visit the link\n");
    scanf("%d",&ch2);
    if(ch2==1){
      display(third1);
      printf("Do you want to visit link of the scholarship website press 1 if want to");
      scanf("%d",&cu);
      if(cu==1){
         urlopener(third1);
      }
    }
    if(ch2==2){
        urlopener(third1);
    }
    break;
  

  case 4:
  
    printf("Do you know ur 10th class or 11th class annual percentage?\n");
    printf("Enter 1 if you do else enter 2\n");
    scanf("%d",&ch1);
    if(ch1==1){
      printf("Enter your percentage\n");
      scanf("%f",&per);
    }
    if(ch1==2){
      sum=calc();
    
     per=sum/10;
    }
    
   // printf("sum%f",sum);
    //printf("per %f ",per);
    if(per>=80){
      printf("Congratulations you are applicable for scholarship\n");

    }
    else{
    printf("OOPS! you will not be able to take up our scholarship as our cutoff for it was 80 percent\n");
    exit(0);
    }
    printf("Enter 1 if you want to know about the scholarship and enter 2 to directly visit the link\n");
    scanf("%d",&ch2);
    if(ch2==1){
      display(fourth1);
      printf("Do you want to visit link of the scholarship website press 1 if want to");
      scanf("%d",&cu);
      if(cu==1){
         urlopener(fourth1);
      }
    }
    if(ch2==2){
      urlopener(fourth1);
    }
    break;

    case 5:
  
    printf("Do you know your CGPA of your course\n");
    printf("Enter 1 if you do else enter 2\n");
    scanf("%d",&ch1);
    if(ch1==1){
      printf("Enter your CGPA\n");
      scanf("%f",&per);
    }
    if(ch1==2){
      per=cgpacalc(fifth1);
    }
    
   // printf("sum%f",sum);
    //printf("per %f ",per);
    if(per>=7){
      printf("Congratulations you are applicable for scholarship\n");

    }
    else{
    printf("OOPS! you will not be able to take up our scholarship as our cutoff for it was 7cgpa\n");
    exit(0);
    }
    printf("enter 1 if you want to know about the scholarship and enter 2 to directly visit the link\n");
    scanf("%d",&ch2);
    if(ch2==1){
      display(fifth1);
      printf("Do you want to visit link of the scholarship website press 1 if want to");
      scanf("%d",&cu);
      if(cu==1){
         urlopener(fifth1);
      }
    }
    if(ch2==2){
      urlopener(fifth1);
    }
    break;
   case 6:

   
   printf("Enter your weight\n");
   int ch2;
   float w,h,bmi;
   scanf("%f",&w);
   printf("enter your height in cm\n");
   scanf("%f",&h);
   h=h*h/10000;
   bmi=w/h;
   if(bmi>=18&&bmi<22){
    printf("Congratulations you  are applicable for scholarship\n");
   }
   else{
    printf("OOPS! you are not eligible to the scholarship as our BMI of the students must atleast be 18.5 and must not exceed 22\n ");
    printf("Your BMI is %f\n\n",bmi);
    printf("press 1 to display bmi chart\n");
    scanf("%d",&bmic);
    if(bmic==1){
   bmidisplay();
    }

    exit(0);

   }
    printf("Enter 1 if you want to know about the scholarship and enter 2 to directly visit the link\n");
    scanf("%d",&ch2);
    if(ch2==1){
      display(sixth1);
      printf("Do you want to visit link of the scholarship website press 1 if want to");
      scanf("%d",&cu);
      if(cu==1){
         urlopener(sixth1);
      }
    }
    if(ch2==2){
      urlopener(sixth1);
    }
break;

}
}

int main(){
  while(3){
solve();


  }

}
