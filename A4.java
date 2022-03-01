//Ranye Mclendon
//EEGR 409 
//Assignment 4
//03/01/2022

//This is a program that  identity the largest city (by population) and the second largest city (by population)

import java.io.*; 
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner; 


public class A4 {
     public static void main (String[] args) throws IOException{
        //declare variables, store files into arrays 
        String[] city = new String[1000];
        int[] population = new int[1000];
        int i=0, j=0;
        int maxpop = 0; 
        int secpop = 0; 

        //open and read file 
        File cityFile = new File("C:\\Users\\RanyeMclendon\\Documents\\EEGR415\\cities.txt"); //open cities
        Scanner in = new Scanner(cityFile);

        File popFile = new File("C:\\Users\\RanyeMclendon\\Documents\\EEGR415\\population.txt"); //open populations
        Scanner pop = new Scanner(popFile);

        //find largest population
        for ( j = 0; pop.hasNextInt(); j++){
            population[j] = pop.nextInt();
            if (population[maxpop] <= population[j]){
                maxpop = j; 
            }
        }

        //find largest city 
        for ( i = 0; in.hasNextLine(); i++){
            city[i] = in.nextLine();
            if (population[i] != population[maxpop] && population[secpop] <= population[i]){
                secpop = i; 
            }
        }

        

        //display 
        System.out.print("\n U.S Cities Analytics\n"); 
        System.out.print("--------------------------------------------\n");
        System.out.print("Largest City: \t\t" + city[maxpop] + "(population " + population[maxpop] + ")\n");
        System.out.print("Second Largest City: \t" + city[secpop] + "(population " + population[secpop] + ")\n\n");
         
        //close out file 
        in.close();
        pop.close(); 

    }
}