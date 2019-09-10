/* Kay Sweebe
 * CS471 - S Cooper
 * Programming2 - Short Circuit
 *
 * Demonstrate whether the Java programming language utilizes the concept of
 * short circuiting.
 *
 * Short circuiting occurs when only part of an expression needs to be
 * evaluated before finding the value.
 * See the following rules:
 *  if a and b and not a then false
 *  if a or  b and a     then true
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
    boolean x = false; // First condition should fail for and
    boolean y = true; // First condition should pass for or

    System.out.println("Start short circuit test AND...");
    if( x && test_short_circuit() );
    System.out.println("...End short circuit test");

    System.out.println("Start short circuit test OR...");
    if( y || test_short_circuit() );
    System.out.println("...End short circuit test");

    System.out.println("Helper function never prints");
    System.out.println("Short circuiting is used in Java");
  }// end main
}// end class
