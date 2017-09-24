import java.util.Scanner;

public class HCF_Eucleid {

    public static void main( String[] args ) {
    	System.out.println("This program calculates HCF. \n ");
    	System.out.println("Enter a number: ");
    	Scanner in = new Scanner(System.in);

        int num1 = in.nextInt();
        int num2 = in.nextInt();
        
        System.out.println( "HCF of " + num1 + " and " + num2 + " : " + hcf( num1, num2 ) );
    }

    /** https://en.wikipedia.org/wiki/Euclidean_algorithm
	function gcd(a, b)
    if b = 0
       return a; 
    else
       return gcd(b, a mod b);
     */
    public static int hcf( int num1, int num2 ) {
        if( num2 == 0 ) {
            return num1;
        }
        else {
            return hcf( num2, num1 % num2 );
        }
    }
}