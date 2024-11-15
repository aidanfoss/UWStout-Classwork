import java.util.*;

//leaving the checks in, usually i'd delete them
public class lottgame {
	
	static void initialize(int[] lottNums) {
		for (int i = 0; i < lottNums.length; i++) {
			lottNums[i] = 0;
		}
	}
	
	static boolean check(int[] lottNums, int checkNum) {
		for (int i = 0; i < lottNums.length; i++) {
			if (lottNums[i] == checkNum) {
				System.out.println("dupe found");
				return true;
			}
		}
		return false;
	}
	
	static void generate(int[] lottNums) {
		Random rand = new Random();
		for (int i = 0; i < lottNums.length; i++) {
			lottNums[i] = (rand.nextInt(99)+1);
			//System.out.println(lottNums[i]);
		}
		
		for (int i = 0; i < lottNums.length; i++) {
			for (int j = 0; j < lottNums.length; j++) {
				if ((lottNums[i] == lottNums[j]) && i!=j) {
					//System.out.println(lottNums[i] + " " + lottNums[j] + " dupe found, relooping"); 
					lottNums[j] = (rand.nextInt(99)+1);
					//for (int k = 0; k < lottNums.length; k++) {
					//	System.out.println("\t" + lottNums[k]);
					//}
					i=0;
				}
				//else {
				//	System.out.println(lottNums[i] + " " + lottNums[j] + " none");
				//}
			}
		}
		
	}
	
	static int input() {
		Scanner scIn = new Scanner(System.in);
		int out;
		do{
			System.out.println("enter a number between 1 and 99:");
			out = scIn.nextInt();
		} while ((out <= 1) || (out >= 99));
		//System.out.println("you chose: " + out);
		return out;
	}
	
	static void printOut(int[] lottNums, int inputNum, boolean win) {
		System.out.println("Lottery Numbers: ");
		for (int i = 0; i < lottNums.length; i++) {
			System.out.println(lottNums[i]);
		}
		System.out.println("You chose: " + inputNum);
		if (win) {
			System.out.println("you won!");
		}
		else {
			System.out.println("you lost :(");
		}
		return;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int playAgain;
		int[] lottNums = new int[10];
		int inputNum;
		boolean win = false;
		do {
			initialize(lottNums);
			generate(lottNums);
			inputNum = input();
			win = check(lottNums, inputNum);
			printOut(lottNums, inputNum, win);
			System.out.println("play again? (1/0)");
			playAgain = sc.nextInt();
		} while (playAgain == 1);
		sc.close();
	}

}
