import java.util.Scanner;
import java.lang.Math;

// What is an Armstrong Number: http://mathworld.wolfram.com/NarcissisticNumber.html

public class Armstrong_Number {

    public static void main( String[] args ) {
    	System.out.println("This program checks whether input is an armstrong number. \n ");
    	System.out.println("Examples of Armstrong Numbers are: 153, 1634, 54748, 548834... \n ");
    	System.out.println("Enter an integer: ");
    	Scanner in = new Scanner(System.in);

        int input = in.nextInt();
        int check, checklen , rem , len, sum =0;
        
        check = input;
        checklen = input;
        
        for (len=0; checklen > 0 ;len++) {              // check length of input
        	checklen = checklen/10;
        }
        
        while (check != 0) {
        	rem = check % 10;
        	sum = sum + (int)(Math.pow(rem,len));      // downcast pow() double output to int
        	check = check/10;
        }

        if (sum == input)
        	System.out.println( input + " is an armstrong number" );
        else
        	System.out.println( input + " is NOT an armstrong number.");
    }
	
}
