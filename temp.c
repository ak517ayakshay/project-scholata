int ch,ch1,ch2;
  float per;
  float sum,t;
 // int a[2];
 printf("enter choice\n");
  scanf("%d",&ch);
  switch(ch){
    case 1:
    printf("Do u know ur 8th class annual percentage?\n");
    printf("enter 1 if u do else enter 2\n");
    scanf("%d",&ch1);
    if(ch1==1){
      printf("enter ur percentage\n");
      scanf("%d",&per);
    }
    if(ch1==2){
      printf("lets calculate now\n");
     printf("enter marks of all 10 subjects\n");
     for(int i=0;i<10;i++){
      scanf("%d",&t);
      sum=sum+t;
      t=0;
     }
     per=sum/10;
     
    }
    if(per>=80){
      printf("Congratulations u r applicable for scholarship\n");

    }
    else{
    printf("OOPS! u will not be able to take up our scholarship as our cutoff for it was 80 percent\n");
    exit(0);
    }
    printf("enter 1 if u want to know about the scholarship and enter 2 to directly visit the link\n");
    scanf("%d",&ch2);
  }
 