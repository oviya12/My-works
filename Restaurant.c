#include <stdio.h>

int main()
{  
    int n,total_bill=0,cust_no1=123,cust_no2=198,tstcode,iter=0,no_of_serve=1,total_bil;
   char choice,ch1,ch2;
   
  do{ 
   rep:
   printf("\n********************************** MENU CARD ************************************* \n MEALS : \n\t 1.Biryani \n\t 2. Fried rice \n\t 3. Noodles  \n\n SNACKS : \n\t 4.Pani puri \n\t 5.Bhel puri ");
   printf("\n\n**********************************************************************************");
   
   printf("\n\n What do you like to have ( Please enter your choice ): "); 
   scanf("%d",&n);
   
   

   
   switch(n)
   {
       case 1: 
       printf("\nRate Details for biryani: \n\n\t\t 1 Serve - Rs.190");
       rep2:
       printf("\n\nShall we Confirm your order? (y/n): ");
       scanf("%s",&choice);
       if(choice!='y' && choice!='n') { printf("Please enter a valid input!!!!");
       goto rep2;}
       if(choice=='y')
       {   printf("How many serves would you like to have? : ");
           scanf("%d",&no_of_serve);
           total_bill=total_bill+190*no_of_serve;   break;}
       else
       break;
       case 2: 
       printf("\nRate Details for Fried Rice: \n\n \t\t 1 serve - Rs.120");
       cas2:
       printf("\n\nShall we Confirm your order? (y/n) : ");
       
       scanf("%s",&choice);
       if(choice!='y' && choice!='n'){ printf("Please enter a valid input!!!!");
       goto cas2;}
       if(choice=='y')
       { printf("How many serves would you like to have? : ");
           scanf("%d",&no_of_serve);
           total_bill=total_bill+120*no_of_serve;  break;}
       else
       break;
       case 3: 
       printf("\nRate Details for Noodles: \n\n\t\t 1 Serve - Rs.100");
       cas3:
       printf("\nShall we Confirm your order? (y/n): ");
       
       scanf("%s",&choice);
       if(choice!='y' && choice!='n'){ printf("Please enter a valid input!!!!!");
       goto cas3;}
       if(choice=='y')
       { printf("How many serves would you like to have? : ");
           scanf("%d",&no_of_serve);
           total_bill=total_bill+100*no_of_serve;  break;}
       else
       break;
       case 4: 
       printf("\nRate Details for Pani Puri: \n\n\t\t 1 Serve - Rs.30");
       cas4:
       printf("\n\nShall we Confirm your order? (y/n): ");
       
       scanf("%s",&choice);
       if(choice!='y' && choice!='n'){ printf("Please enter a valid input!!!");
       goto cas4;}
       if(choice=='y')
       { printf("How many serves would you like to have? : ");
           scanf("%d",&no_of_serve);
           total_bill=total_bill+30*no_of_serve;  break;}
       else
       break;
       case 5: 
       printf("\nRate Details for Bhel puri: \n\n \t\t 1 Serve - Rs.35");
       cas5:
       printf("\n\nShall we Confirm your order? (y/n): ");
       scanf("%s",&choice);
       if(choice!='y' && choice!='n'){ printf("Please enter a valid input!!!!!");
       goto cas5;}
       if(choice=='y')
       { printf("How many serves would you like to have? : ");
           scanf("%d",&no_of_serve);
           total_bill=total_bill+35*no_of_serve;
       break;}
       else
       break; 
       default:  
       printf("pLease enter a valid input!!");
       goto rep;
       break;
       
   }  
   rep1:
   printf("\nDo you need anything else(y/n):");
      scanf("%s",&ch1);
      if(ch1!='y' && ch1!='n')
      {printf("Enter valid input"); goto rep1;}
   
    
  }while(ch1=='y');
  
  printf("\nAre you Regular Customer card holder? (y/n)");
  scanf("%s",&ch2);
  if(ch2=='y')
  
  {
  printf("\nPlease Enter your card number : ");
  scanf("%d",&tstcode);
  while(iter<3){
  if(tstcode==cust_no1 || tstcode==cust_no2)
  {   printf("\nCongratz! You are eligible to gain 10 PERCENT OFFER");
      total_bil = total_bill-(total_bill/10);break;}
  else {
      printf("\nSorry Your card number is invalid "); 
      iter++;
      printf("Please enter and try again: ");
      scanf("%d",&tstcode);
      if(iter==3)
      printf("\nOOPS!! Your try limit exceeded, If you need any further assistance please contact our support team");
      
  }}}
  
  
  printf("\n\n\nYour total bill amount : %d",total_bill);
  if(tstcode==cust_no1 || tstcode==cust_no2)
  printf("\n\n\nYour discounted amount: %d",total_bil);
  printf("\n\n**********************************************************************************");
  printf("\n\n\t\t THANKS FOR YOUR ORDER !! HAPPY MEALS!!!");
  printf("\n\n**********************************************************************************");
   
return 0;
}