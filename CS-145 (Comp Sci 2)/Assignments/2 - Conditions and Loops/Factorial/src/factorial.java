import java.util.Scanner;

public class factorial {
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double num = sc.nextInt();
		double temp = num;
		
		while(num > 1) {
			temp = temp * (num - 1);
			num--;
		}
		
		System.out.println(temp);
	}
	
	
}
