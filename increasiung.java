public import java.util.Scanner;

class Codechef
{
	public static void main (String[] args)
	{
	    Scanner sc = new Scanner(System.in);
	    
	    
	    int num1 = sc.nextInt();
	    int num2 = sc.nextInt();
	    int num3 = sc.nextInt();
	    
	    
	    if(num1 < num2 && num2 < num3) {
	        System.out.println("increasing");
	   
	    } else if(num1 > num2 && num2 > num3) {
	        System.out.println("decreasing");
	    } else {
	        System.out.println("neither")
	    }
	    sc.close();
	}
}
