import java.util.Scanner;

public class Fibonacci {

    public static void main( String[] args ) {
    	System.out.println("This program calculates fibonacci numbers. \n ");
    	System.out.println("Enter a number: ");
    	Scanner in = new Scanner(System.in);
    	int input = in.nextInt();

        System.out.println( "Fibonacci Number f("+ input + ") = " + fibonacci( input ) );
        System.out.println( "Fibonacci Number f("+ (input-1) + ") = " + fibonacci( input-1 ) );
        System.out.println( "Fibonacci Number f("+ (input-9) + ") = " + fibonacci( input-2 ) );

    }

    public static int fibonacci( int n ) {
        if( n == 1 ) {
            return 1 ;
        }
        else if ( n < 1 ) {
            return 0;
        }
        return fibonacci( n-1 ) + fibonacci( n-2 );
    }
}