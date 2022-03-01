//Ranye Mclendon
//EEGR 409 
//Lecture 3 Lab 4B
//02/17/2022

//This is a program calculates a table of sqaures printing all values to the right of the diagonals of the table using continue statement 

import java.io.*; 
import java.util.Scanner;


public class L3L4B {
     public static void main (String[] args) throws IOException{
         //declare variable
         int N, row, col;
         
         //ask user for dimension for the table
         Scanner in = new Scanner(System.in);
         System.out.print("Enter the dimension of the square table: ");
         N = in.nextInt();
         
         //calculate a table of squares by looping from 0 to N
         for (row = 1; row <= 5; row++){
             for(col = 1; col <= N; col++){
                //display the table with N and squared N 
                if ( col >= row){
                    System.out.print((row * col) +"\t"); 
                 }
                 else{
                    System.out.print("\t"); 
                 } 
             }
             
        System.out.print("\n"); 
         }
     }
    }