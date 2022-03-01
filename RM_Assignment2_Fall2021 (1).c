/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float loan, interestrate, monthlypayment, monthlyinterestrate, firstpayment, secondpayment, thirdpayment, secondinterestrate, secondmonthlyinterestrate; 
    
    printf("Enter amount of loan: \n ");
    scanf("%f", &loan);
   
    printf("Enter interest rate: \n ");
    scanf("%f", &interestrate);
   
    printf("Enter monthly payment: \n ");
    scanf("%f", &monthlypayment);
   
    monthlyinterestrate = (interestrate / 100) /12 ;
    firstpayment = (loan * monthlyinterestrate) + (loan - monthlypayment);
    printf("Balance remaining after first payment:  %.2f \n", firstpayment); 
   
    secondpayment = (firstpayment * monthlyinterestrate) + (firstpayment - monthlypayment);
    printf("Balance remaining after second payment:  %.2f \n", secondpayment); 
    
    thirdpayment = (secondpayment * monthlyinterestrate ) + ( secondpayment- monthlypayment);
    printf("Balance remaining after first payment:  %.2f \n", thirdpayment); 
    
    printf("+------------+------------+\n");
    printf("|Payment     |\tBalance   |\n");
    printf("+------------+------------+\n");
    printf("|1           |\t%.2f  |\n", firstpayment);
    printf("|2           |\t%.2f  |\n", secondpayment);
    printf("|3           |\t%.2f  |\n", thirdpayment);
    printf("+------------+------------+\n");
    
    return 0;
}



