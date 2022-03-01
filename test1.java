//Ranye Mclendon
//EEGR 409 
//Lecture 4 Lab 3
//02/24/2022

//This is a program reads and copy a text file 

import java.io.*; 
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner; 


public class Q3 {
     public static void main (String[] args) throws IOException{
        //open and reads file 

        File myfile = new File("lab4_3.txt");
        Scanner in = new Scanner(myfile); 
        
        //open output file
        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("copy_of_lab4_3.txt")));
        
        //read line by line 
        System.out.print("Copying the file..."); 
        while(in.hasNextLine());{
            String buffer = in.nextLine(); 
            out.println(buffer); 
        }

        System.out.print("File Copied.");

        in.close();
        out.close();
    

     }
    }