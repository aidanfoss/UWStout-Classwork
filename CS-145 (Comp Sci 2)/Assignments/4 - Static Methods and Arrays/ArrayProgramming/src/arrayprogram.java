import java.util.*;
public class arrayprogram {

	static void fillArray(double[][] array) {
		Random rand = new Random();
		for (int i = 0; i < array.length; i++) {
			for(int j = 0; j < array[i].length; j++) {
				array[i][j] = (rand.nextDouble(14) + 1);
			}
		}
		return;
	}
	
	static void multiplyArrays(double[][] one, double[][] two) {
		double[][] zArray = new double[one.length][two[0].length];
		for (int row = 0; row < one.length; row++) {
			for (int col = 0; col < one[row].length; col++) {
				zArray[row][col] = one[row][col] * two[row][col];
			}
		}
		printArray(zArray);
		//one[][]*two[][];
		
	}
	
	static void printArray(double[][] array) {
		for (int row = 0; row < array.length; row++) {
			for (int col = 0; col < array[row].length; col++) {
				System.out.print(array[row][col] + " ");
			}
			System.out.println();
		}
	}
	
	
	public static void main(String[] args) {
		
		double[][] xArray = new double[3][4];
		fillArray(xArray);
		printArray(xArray);
		System.out.println();
		System.out.println();
		
		double[][] yArray = new double[4][5];
		fillArray(yArray);
		printArray(yArray);
		System.out.println();
		System.out.println();
		
		multiplyArrays(xArray, yArray);
		
	}

}
