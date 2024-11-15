import java.util.Scanner;

public class personwater {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("how many vehicles?");
		
		int count = sc.nextInt();
		System.out.println();
		
		String[] make = new String[count];
		String[] model = new String[count];
		int[] numSeats = new int[count];
		boolean[] backupCam = new boolean[count];
		int[] price = new int[count];
		
		String temp;
		
		for (int i = 0; i < count; i++) {
			System.out.println("Vehicle number " + i+1 + " ------- ");
			System.out.println("what is the make?");
			make[i] = sc.next();
			System.out.println("what is the model?");
			model[i] = sc.next();
			System.out.println("what is the number of seats?");
			numSeats[i] = sc.nextInt();
			System.out.println("is there a backup camera? (enter yes or no)");
			temp = sc.next();
			if (temp.equals("yes")) {
				backupCam[i] = true;
			}
			else if (temp.equals("no")) {
				backupCam[i] = false;
			}
			else {
				System.out.println("error, ending program.");
				System.out.println("entered invalid input for backup cam");
				return;
			}
			System.out.println("what is the price?");
			price[i] = sc.nextInt();
			
		}
		
		for (int i = 0; i < count; i++) {
			System.out.println("make \t\t\t : " + make[i]);
			System.out.println("model \t\t\t : " + model[i]);
			System.out.println("number of seats \t : " + numSeats[i]);
			System.out.println("backup camera \t1\t : " + backupCam[i]);
			System.out.println("car price \t\t : " + price[i]);
			System.out.println("------------------------------------------");
			
		}
		sc.close();
	}

}
