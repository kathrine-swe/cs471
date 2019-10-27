/*                                                                          
 * Kay Sweebe
 * CS471 - S. Cooper
 * Ch. 5 Programming Assignment
 *
 * Purpose:
*/
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.util.Scanner;

class toCSV{
   public static void main(String args[])
     throws FileNotFoundException
   {
     // Make file object
     File file = new File("test.txt");

     // Make scanner object
     Scanner sc = new Scanner(file);

     // Make string to write to file
     String csv_string = "";

     // Read file by line
     while (sc.hasNextLine()){

       // Grab line
       String line = sc.nextLine();

       // Edited line
       String edit_line = line;

       // Edit all lines that are not the first or last
       if( !line.equals("%%%%%") && !line.equals("$$$$$") ){

         // Look for double quotes
         if(line.contains("\"")){
           edit_line = line.replaceAll("\"", "\"\"");
         }// end if quotes

         // Look for commas
         if(line.contains(",")){
           edit_line = "\"" + edit_line + "\"";
         }// end if comma

         csv_string = csv_string + edit_line + ", ";
       }// end if beginning or ending line
     }// end while

     // Remove last comma
     csv_string = csv_string.substring(0, csv_string.length()-2);

     System.out.println(csv_string);

     // Write csv
     try{
       FileWriter fw = new FileWriter("csv_java.csv");
       fw.write(csv_string);
       fw.close();
     }catch(Exception e){
       System.out.println(e);
     }// end write csv
   }// end main
 }// end class
