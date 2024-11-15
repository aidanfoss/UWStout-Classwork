import java.util.Scanner;

public class function {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//y = 7x^2 + 4x - 4
		Scanner sc=new Scanner(System.in);
		
		System.out.println("input first value:");
		int a = sc.nextInt();
		System.out.println("input second value:");
		int b = sc.nextInt();
				
		System.out.println("x value \t y value");
		System.out.println("------ \t ------");
		int temp1;
		int temp2;
		int temp3;
		int temp4;
		for (int i = a; i < b; i++) {
			temp1 = i * i; 
			temp2 = 7 * temp1;
			temp3 = temp2 + (4 * i);
			temp4 = temp3 - 4;
			System.out.println( i + "\t" + temp4);
		}
		
	}

}
