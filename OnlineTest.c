#include<stdio.h>
void main(){  
    int ch,ans1,score=0;
     char arr[20];
     char dept[100];
    printf("Enter name of students : "); scanf("%s",arr);
    printf("Enter the department :  "); scanf("%s",dept);
    
    
    printf("\n1.JAVA \n2.Android  \n3.Web development");

    printf("\n\nSelect any one subject: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("\n You have chosen JAVA : ");
        printf("\n\n Q1.Which of the following is not a Java features? \n1. Dynamic \n2.Architecture Neutral \n3.Use of pointers \n4.Object-oriented");
        printf("\n\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==3){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n Wrong answer!!!");
        }
        printf("\n\nQ2._________is used to find and fix bugs in the Java programs. \n1. JVM \n2. JRE\n3. JDK\n4. JDB");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==4){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\nWrong answer!!!");}
        printf("\n\nQ3.What does the expression float a = 35 / 0 return? \n1. 0 \n2. Not a Number \n3. Infinity \n4. Run time exception");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==3){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\n Wrong answer!!!");}
        printf("\nQ4.Which of the following for loop declaration is not valid? \n1. for ( int i = 99; i >= 0; i / 9 \n2. for ( int i = 7; i <= 77; i += 7 ) \n3. for ( int i = 20; i >= 2; - -i ) \n4. for ( int i = 2; i <= 20; i = 2* i )");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==1){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\nWrong answer!!!");}
        printf("\n\nQ5.In which memory a String is stored, when we create a string using new operator? \n1. Stack \n2. String memory \n3. Heap memory \n4. Random storage space");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==3){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\nWrong answer!!!");}
        printf("\n\n*****************************************************");
        printf("\n Your Score: %d out of 5",score);
        printf("\n\n*****************************************************");

        break;
        case 2:
        printf("\n You have chosen Android : ");
        printf("\n\nQ1.Under which of the following Android is licensed? \n1. OSS \n2. Sourceforge \n3. Apache/MIT \n4. None of the above");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==3){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\nWrong answer!!!");
        }
        printf("\n\nQ2.For which of the following Android is mainly developed? \n1. Servers \n2. Desktops \n3. Laptops \n4. Mobile devices");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==4){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\nWrong answer!!!");}
        printf("\n\nQ3.Which of the following is the first mobile phone released that ran the Android OS? \n1. HTC Hero \n2. Google gPhone \n3. T - Mobile G1 \n4. None of the above");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==3){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\n Wrong answer!!!");}
        printf("\n\nQ4.Which of the following virtual machine is used by the Android operating system? \n1. JVM \n2. Dalvik virtual machine \n3. Simple virtual machine \n4. None of the above");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==2){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\nWrong answer!!!");}
        printf("\n\nQ5.Android is based on which of the following language? \n1. Java \n2. C++ \n3. C \n4. None of the above");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==1){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\nWrong answer!!!");}
        printf("\n\n*****************************************************");
        printf("\n Your Score: %d out of 5",score);
        printf("\n\n*****************************************************");

        break;
        case 3:
         printf("\n You have chosen Web Development : ");
        printf("\n\nQ1. There are ___ levels of heading in HTML \n1. Three \n2. Four \n3. Five \n4. Six");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==4){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\nWrong answer!!!");
        }
        printf("\n\nQ2. What is the Full Form of the SPX? \n1. Sequenced Packet Exchange \n2. Sequence Packet Exchange \n3. Sequenced Packets Exchange \n4. None of the above");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==1){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\nWrong answer!!!");}
        printf("\n\nQ3. The Major components of the Web browser are ___ \n1. Menu bar \n2. Toolbar \n3. Location \n4. All of the Above");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==4){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\n Wrong answer!!!");}
        printf("\n\nQ4. What is the Full Form of the IMAP? \n1. Internet Mail Access Protocol \n2. Internet Mails Access Protocol \n3. Internet Memo Access Protocol \n4. All of the Above");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==1){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n\nWrong answer!!!");}
        printf("\n\nQ5.  ___ is widely known as the father of the World Wide Web \n1. Tom burners-lee \n2. Tom bruce-lee \n3. Tim bruce-lee \n4. Tim Berners-Lee");
        printf("\n Enter the correct choice: ");
        scanf("%d",&ans1);
        if (ans1==4){
            printf("\n Right answer ");
            score+=1;
        }
        else{
            printf("\n \nWrong answer!!!");}
        printf("\n\n*****************************************************");
        printf("\n\n\nYour Score: %d out of 5",score);
        printf("\n\n*****************************************************");


        break;
        default:
        printf("\nEnter a valid choice!!!!");
        

    }}


