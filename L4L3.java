//Ranye Mclendon
//EEGR 409 
//Lecture 4 Lab 3
//02/24/2022

//This is a program reads 10 numbers,stores them in an array, and prints the reverse  

import java.io.*; 
import java.util.Scanner; 


public class L4L3 {
     public static void main (String[] args) throws IOException{
        //open and reads file 

        File myFile = new File("lab4_3.txt"); 
        Scanner in = new Scanner(myFile);
        
        //open output file
        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("copy_of_lab4_3.txt")));
        
        //read line by line 
        System.out.print("Copying the file...");
        while (in.hasNextLine()){
            String buffer = in.nextLine();
            out.println(buffer); 
        }
        System.out.print("File copied");

        in.close();
        out.close();

     }
    }