/* Kay Sweebe
 * CS471 - S Cooper
 * Short Circuiting in Java
 */

public class ShortCircuit {
  /** Checks to see if java includes short circuiting of compound statement
   **/

  static boolean test_short_circuit(){
    /** Helper function
     *  If contents get printed, then short circuiting does not happen
     *  Else short circuiting occurs
     *
     *  @return false
     **/
    System.out.println("I just got executed");
    return false;
  }// end test_short_circuit

  public static void main(String[] args){
    boolean x = false; // First condition should fail
    System.out.println("Start short circuit test...");
    if( x && test_short_circuit() );
    System.out.println("...End short circuit test");
    System.out.println("Helper function never prints");
    System.out.println("Short circuiting is used in Java");
  }// end main
}// end class
