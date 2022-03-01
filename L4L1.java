//Ranye Mclendon
//EEGR 409 
//Lecture 4 Lab 1
//02/24/2022

//This is a program reads 10 numbers,stores them in an array, and prints the reverse  

import java.io.*; 
import java.util.Scanner;


public class L4Ll {
     public static void main (String[] args) throws IOException{
        //declare variables 
         int[] a = new int[10]; 
         int i; 

        //ask user for numbers 
         Scanner in = new Scanner(System.in); 
         System.out.println("Enter 10 numbers: ");

        //store numbers in an array 
        for(i=0; i < 10; i++){
            a[i] = in.nextInt();

        }
        System.out.print("The reverse of the number you printed are: ");
        for(i = 9; i >= 0; i--){
            //print the array in reverse 
            System.out.print( a[i] + "");
        }
     }
    }