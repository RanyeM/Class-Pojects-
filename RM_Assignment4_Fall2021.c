/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Name: Ranye Mclendon 
//Class: EEGR 409 
//Assignment: Assignment 4 
//Date: September 25, 2021 

////https://drive.google.com/file/d/1T42JpsGR9vO-TOTGXKZgZ4-5Vc4mbmJX/view?usp=sharing

#include <stdio.h>
#include <math.h> 

int main()
{
    //declare and intialize 
    double loan = 0.0;
    double interestrate = 0.0;
    double monthlypayment = 0.0;
    double monthlyinterestrate = 0.0;
    double firstpayment = 0.0;
    double secondpayment = 0.0;
    double thirdpayment = 0.0;
    double fourthpayment = 0.0;
    double fifthpayment = 0.0;
    double sixthpayment = 0.0;
    double seventhpayment = 0.0;
    double eigthpayment = 0.0;
    double ninthpayment = 0.0;
    double tenthpayment = 0.0;
    double eleventhpayment = 0.0; 
    double twelvepayment = 0.0;
    double thirteenpayment = 0.0;
    double fourteenpayment = 0.0;
    double fifteenpayment = 0.0;
    double sixteenpayment = 0.0; 
    double seventeenpayment = 0.0;
    double eigthteenpayment = 0.0;
    double nineteenpayment = 0.0;
    double twentypayment = 0.0;
    double twentyonepayment = 0.0;
    double twentytwopayment = 0.0;
    double totalpayment = 0.0;
 

    // the first while loop for Loan amount, 
    //asks user for input and if any of these conditions fail, the program displays an error message and continuous to ask for a valid amount
    while (1){
        printf("Enter amount of loan (more than $1000): \n ");
        scanf("%lf", &loan);
        if (loan >= 1000){
            break;
        }
        printf ("INVALID LOAN AMOUNT: Loan must be more than $1000.\n");
        printf ("Please try again\n\n");
    }
    
    getchar(); 
    
    // the second while loop for Interest rate 
    //asks user for input and if any of these conditions fail, the program displays an error message and continuous to ask for a valid amount

    while (1){
        printf("Enter interest rate: \n ");
        scanf("%lf", &interestrate);
        if(interestrate <= 10 && interestrate >= 2){
            break;
        }
        printf ("INVALID INTEREST RATE: Interest rate must be between 2 and 10 percent.\n");
        printf ("Please try again\n\n");
    }
    
    getchar(); 
    
    // the third while loop for monthly payment amount 
    //asks user for input and if any of these conditions fail, the program displays an error message and continuous to ask for a valid amount

    while (1){
        printf("Enter monthly payment: \n ");
        scanf("%lf", &monthlypayment);
        if(monthlypayment >= 0){
            break;
        }
        printf ("INVALID MONTHLY PAYMENT: Monthly payment should be greater than 0.\n");
        printf ("Please try again\n\n");
    }
    
    getchar(); 
  
    
    //calculations needed for monthly payments and monthly interest rate 
    //display payments in order 
    monthlyinterestrate = (interestrate / 100) /12 ;
        
    firstpayment = (loan * monthlyinterestrate) + (loan - monthlypayment);
    secondpayment = (firstpayment * monthlyinterestrate) + (firstpayment - monthlypayment);
    thirdpayment = (secondpayment * monthlyinterestrate ) + ( secondpayment- monthlypayment);
    fourthpayment = (thirdpayment * monthlyinterestrate ) + ( thirdpayment- monthlypayment);
    fifthpayment = (fourthpayment * monthlyinterestrate ) + ( fourthpayment- monthlypayment);
    sixthpayment = (fifthpayment * monthlyinterestrate ) + ( fifthpayment- monthlypayment);
    seventhpayment = (sixthpayment * monthlyinterestrate ) + ( sixthpayment- monthlypayment);
    eigthpayment = (seventhpayment * monthlyinterestrate ) + ( seventhpayment- monthlypayment);
    ninthpayment = (eigthpayment * monthlyinterestrate ) + (eigthpayment- monthlypayment);
    tenthpayment = (ninthpayment * monthlyinterestrate ) + ( ninthpayment- monthlypayment);
    eleventhpayment = (tenthpayment * monthlyinterestrate ) + ( tenthpayment- monthlypayment);
    twelvepayment = (eleventhpayment * monthlyinterestrate ) + ( eleventhpayment- monthlypayment);
    thirteenpayment = (twelvepayment * monthlyinterestrate ) + ( twelvepayment- monthlypayment);
    fourteenpayment = (thirteenpayment * monthlyinterestrate ) + ( thirteenpayment- monthlypayment);
    fifteenpayment = (fourteenpayment * monthlyinterestrate ) + ( fourteenpayment- monthlypayment);
    sixteenpayment = (fifteenpayment * monthlyinterestrate ) + ( fifteenpayment- monthlypayment);
    seventeenpayment = (sixteenpayment * monthlyinterestrate ) + ( sixteenpayment- monthlypayment);
    eigthteenpayment = (seventeenpayment * monthlyinterestrate ) + ( seventeenpayment- monthlypayment);
    nineteenpayment = (eigthteenpayment * monthlyinterestrate ) + ( eigthteenpayment- monthlypayment);
    twentypayment = (nineteenpayment * monthlyinterestrate ) + ( nineteenpayment- monthlypayment);
    twentyonepayment = (twentypayment * monthlyinterestrate ) + ( twentypayment- monthlypayment);
    twentytwopayment = (twentyonepayment * monthlyinterestrate ) + ( twentyonepayment- 12.50);
 
    
    //total payment calculation
    totalpayment = firstpayment + secondpayment + thirdpayment + fourthpayment + fifthpayment + sixthpayment + seventhpayment + eigthpayment + ninthpayment + tenthpayment + eleventhpayment + twelvepayment + thirteenpayment + fourteenpayment + fifteenpayment + sixteenpayment + seventhpayment + eigthteenpayment + nineteenpayment + twentypayment + twentyonepayment + twentytwopayment;
   
    
    //table display 
    printf("+----------+------------+---------+---------------+\n");
    printf("|Payment No| Payment Amt| Balance | Total Payments|\n");
    printf("+----------+------------+---------+---------------+\n");
    printf("|1         |%.2f\t|%.2f  |%.2f\t  |\n", monthlypayment, firstpayment, monthlypayment);
    printf("|2         |%.2f\t|%.2f  |%.2f\t  |\n", monthlypayment, secondpayment, monthlypayment + 100);
    printf("|3         |%.2f\t|%.2f  |%.2f\t  |\n", monthlypayment, thirdpayment, monthlypayment + 200);
    printf("|4         |%.2f\t|%.2f  |%.2f\t  |\n", monthlypayment, fourthpayment, monthlypayment + 300);
    printf("|5         |%.2f\t|%.2f  |%.2f\t  |\n", monthlypayment, fifthpayment, monthlypayment + 400);
    printf("|6         |%.2f\t|%.2f  |%.2f\t  |\n", monthlypayment, sixthpayment, monthlypayment + 500);
    printf("|7         |%.2f\t|%.2f  |%.2f\t  |\n", monthlypayment, seventhpayment, monthlypayment + 600);
    printf("|8         |%.2f\t|%.2f  |%.2f\t  |\n", monthlypayment, eigthpayment, monthlypayment + 700);
    printf("|9         |%.2f\t|%.2f  |%.2f\t  |\n", monthlypayment, ninthpayment, monthlypayment + 800);
    printf("|10        |%.2f\t|%.2f  |%.2f\t  |\n", monthlypayment, tenthpayment, monthlypayment + 900);
    printf("|11        |%.2f\t|%.2f   |%.2f\t  |\n", monthlypayment, eleventhpayment, monthlypayment * 10 + 100);
    printf("|12        |%.2f\t|%.2f   |%.2f\t  |\n", monthlypayment, twelvepayment, monthlypayment * 10 + 200);
    printf("|13        |%.2f\t|%.2f   |%.2f\t  |\n", monthlypayment, thirteenpayment, monthlypayment * 10 + 300);
    printf("|14        |%.2f\t|%.2f   |%.2f\t  |\n", monthlypayment, fourteenpayment, monthlypayment * 10 + 400); 
    printf("|15        |%.2f\t|%.2f   |%.2f\t  |\n", monthlypayment, fifteenpayment, monthlypayment * 10 + 500);
    printf("|16        |%.2f\t|%.2f   |%.2f\t  |\n", monthlypayment, sixteenpayment, monthlypayment * 10 + 600);
    printf("|17        |%.2f\t|%.2f   |%.2f\t  |\n", monthlypayment, seventeenpayment, monthlypayment * 10 + 700); 
    printf("|18        |%.2f\t|%.2f   |%.2f\t  |\n", monthlypayment, eigthteenpayment, monthlypayment * 10 + 800); 
    printf("|19        |%.2f\t|%.2f   |%.2f\t  |\n", monthlypayment, nineteenpayment, monthlypayment * 10 + 900); 
    printf("|20        |%.2f\t|%.2f   |%.2f\t  |\n", monthlypayment, twentypayment, monthlypayment * 20);
    printf("|21        |%.2f\t|%.2f    |%.2f\t  |\n", monthlypayment, twentyonepayment, monthlypayment *21  );
    printf("|22        |12.50\t|%.2f     |%.2f\t  |\n", twentytwopayment, monthlypayment*22 + 12.50);
    printf("+----------+------------+---------+---------------+\n");
    
    return 0;
}





