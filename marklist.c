#include<stdio.h>
void main(){  
    int m1,m2,m3,m4,m5;
     char arr[20];
    printf("Enter name of students: "); scanf("%s",&arr);
    printf("Enter 1st mark: "); scanf("%d",&m1);
    printf("Enter 2nd mark: "); scanf("%d",&m2);
    printf("Enter 3rd mark: "); scanf("%d",&m3);
    printf("Enter 4th mark: "); scanf("%d",&m4);
    printf("Enter 5th mark: "); scanf("%d",&m5);
    printf("\n");
    printf("********************* MARKLIST ******************************** ");
    printf("\nName of the student: %s", arr);
    printf("\n Your Grade: ");
    printf("\n");
    if (m1<=100 && m2<=100 && m3<=100 && m4<=100 && m5<=100 && m1>0 && m2>0 && m3>0 && m4>0 && m5>0){

    if (m1>=90){
        printf("\n\tGrade in subject 1: A ");
        }
    else if(m1>=70 &&m1<=90)
    {
         printf("\n\tGrade in subject 1: B ");
    }
    else if(m1>=50 &&m1<=70)
    {
        printf("\n\tGrade in subject 1: C ");
    }
    else{
        printf("\n\tFailed in subject 1 ");
    }
    if (m2>=90){
        printf("\n\tGrade in subject 2: A ");
    }
    else if(m2>=70 &&m2<=90)
    {
         printf("\n\tGrade in subject 2: B ");
    }
    else if(m2>=50 &&m2<=70)
    {
        printf("\n\tGrade in subject 2: C ");
    }
    else{
        printf("\n\tFailed in subject 2 ");
    }
    if (m3>=90){
        printf("\n\tGrade in subject 3: A ");
    }
    else if(m3>=70 &&m3<=90)
    {
         printf("\n\tGrade in subject 3: B ");
    }
    else if(m3>=50 &&m3<=70)
    {
        printf("\n\tGrade in subject 3: C ");
    }
    else{
        printf("\n\tFailed in subject 3 ");
    }
    if (m4>=90){
        printf("\n\tGrade in subject 4: A ");
    }
    else if(m4>=70 &&m4<=90)
    {
         printf("\n\tGrade in subject 4: B ");
    }
    else if(m4>=50 &&m4<=70)
    {
        printf("\n\tGrade in subject 4: C ");
    }
    else{
        printf("\n\tFailed in subject 4  ");
    }
    if (m5>=90){
        printf("\n\tGrade in subject 5: A ");
    }
    else if(m5>=70 && m5<=90)
    {
         printf("\n\tGrade in subject 5: B ");
    }
    else if(m5>=50 &&m5<=70)
    {
        printf("\n\tGrade in subject 5: C ");
    }
    else{
        printf("\n\tFailed in Subject 5 ");}
    
    
        printf("\n");
    printf("\n****************************************************************");
    printf("\n");
    printf("\nSum of marks: %d ", m1+m2+m3+m4+m5);
    printf("\n");
    printf("\nAverage of marks: %d ", (m1+m2+m3+m4+m5)/5);
    printf("\n");
     printf("\n****************************************************************");

    }
    
    else{
        printf("\nEnter valid marks !!!!! ");
    }
    








    }
