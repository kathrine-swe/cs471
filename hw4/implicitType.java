/*
 * Kay Sweebe
 * CS471 - S. Cooper
 * Ch. 5 Programming Assignment
 *
 * Purpose:
 *  Determining the scope of variables in Java.
 *  Notice the class variable x is not callable from the function main.
*/
class implicitJava{

  x = 21; // Declare class variable x

  public static void main(String args[]){
    x = 21; // Assign class variable x
    int x; // Declare local variable x
    x = 42; // Assign class variable x

  }// end main
}// end class
