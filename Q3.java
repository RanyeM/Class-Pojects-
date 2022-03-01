//Ranye Mclendon
//EEGR 409 
//Quiz 3
//02/24/2022

//This is a program that uses a switch to display 

import java.io.*; 
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner; 


public class Q3 {
     public static void main (String[] args) throws IOException{
    //declare
    int gauge;
    double rho; 
    char A,B;

    //ask user to enter number 
    Scanner in = new Scanner(System.in);
    System.out.print("Enter wire gauge: ");
    gauge = in.nextInt();
    
    //switch statement 

    switch(gauge){
        case 12: rho = 5.211; 
        break;
        case 14: rho = 8.285; 
        break;
        case 16: rho = 13.170; 
        break;
        case 18: rho = 20.950; 
        break;
        default: System.out.println("Invalid guage\n");
    }
    System.out.println(gauge);
}}