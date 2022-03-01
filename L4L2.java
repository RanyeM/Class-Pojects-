//Ranye Mclendon
//EEGR 409 
//Lecture 4 Lab 2
//02/24/2022

//This is a program reads 5 numbers,stores them in an array, and prints the average 

import java.io.*; 
import java.util.Scanner;


public class L4L2 {
     public static void main (String[] args) throws IOException{
        //declare variables 
         float[] a = new float[5]; 
         float sum = 0, average; 
         int i; 

        //ask user for numbers 
         Scanner in = new Scanner(System.in); 
         System.out.println("Enter 5 numbers: ");

        //store numbers in an array 
        for(i=0; i < 5; i++){
            a[i] = in.nextFloat();

        }
        System.out.print("The average of the numbers are: ");
        for(i = 0; i < 5; i++){
            //calculate sum 
            sum += a[i];
            
        }
        average = sum/a.length;
        System.out.print("The average of the array is: " +average);
     }
    }