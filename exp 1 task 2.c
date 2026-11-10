#include<stdio.h>

int main ()
{
    //labelling
    char Name[50], UIN [20];

    float Physics, Chemistry, Mathematics, Average, Total_Marks;

    //Printing
    printf("Enter your Name: ");
    scanf("%[^\n]s", Name);

    printf("Enter Your UIN: ");
    scanf("%s", UIN);

    printf("Enter Your Marks in Physics: ");
    scanf("%f", &Physics);

    printf("Enter Your Marks in Chemistry: ");
    scanf("%f", &Chemistry);

    printf("Enter Your Marks in Mathematics: ");
    scanf("%f", &Mathematics);

    //Validation
    if (Physics < 0 || Physics > 100)
    {
        printf("Error:Enter marks between 0 to 100");
        return 1;
    }
    else if (Mathematics < 0 || Mathematics > 100)
    {
        printf("Error:Enter marks between 0 to 100");
        return 1;
    }
    else if (Chemistry < 0 || Chemistry > 100)
    {
        printf("Error:Enter marks between 0 to 100");
        return 1;
    }

    //calculation
    Total_Marks = Physics + Chemistry + Mathematics;
    Average = (Physics + Chemistry + Mathematics)/3;

    //printing of Total Marks
    printf("Total Marks:%.2f/100 \n", Total_Marks);

    // printing of Average
    printf("Average:%.2f\n", Average);

    // Eligibility
    (Average>=50) ? printf("Eligible for admission.\n") : printf("Not Eligible for admission.");

    return 0;
}
