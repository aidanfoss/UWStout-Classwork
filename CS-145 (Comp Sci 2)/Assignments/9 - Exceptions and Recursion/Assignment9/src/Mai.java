import java.io.File;
import java.util.Scanner;
import java.util.Arrays;

public class Mai {
	static int[] arr;
	static int totalLines = 0; //realized i could have used arr.length, this does essentially the same thing.

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		fillArrayFromFile("UniqueIntegers-1.txt");
		
		sortArray(arr);
		System.out.println("------------------");
		for (int i = 0; i < totalLines; i++) {
			System.out.println(arr[i]);
		}
		
		boolean seq = sequentialSearch(arr, 104);
		System.out.println("sequentialSearch = " + seq);
		
		recursionBinarySearch(arr, 104, 0, totalLines);
		binarySearch(arr, 104);
	}
	
	public static void fillArrayFromFile(String FileName) {

		
		try {
			File file1 = new File(FileName);
			@SuppressWarnings("resource")
			Scanner scanner = new Scanner(file1);
			do {
				scanner.nextLine();
				totalLines++;
			} while (scanner.hasNext());
			
			arr = new int[totalLines];
			
			File file2 = new File(FileName);
			@SuppressWarnings("resource")
			Scanner scanner2 = new Scanner(file2);
			for (int i = 0; i < totalLines; i++) {
				arr[i] = scanner2.nextInt();
				System.out.println(arr[i]);
			}
		} 
		catch (Exception e) {
			System.out.println("Exception caught in fillArrayFromFile");
			System.out.println("likely file not found");
		}

		//return arr;
	}
	public static void sortArray(int[] arr) {
		//TODO
		Arrays.sort(arr);
		
	}
	public static boolean sequentialSearch(int[] arr, int key) {
		for (int i = 0; i < totalLines; i++) {
			if (arr[i] == key) {
				System.out.println("key matched an int in the array");
				return true;
			}
			//else {
				//System.out.println(key + " did not match " + arr[i]);
			//}
		}
		return false;
	}
	public static int recursionBinarySearch(int[] arr, int key, int start, int end) { //start would be 0 and end would be totalLines on first call
		//help from Gustavo Ponce
		//https://medium.com/@gustavo.ponce.ch/binary-search-with-java-recursive-iterative-java-collections-5a12a814a27c
		
		//find the middle
		int middle = (start + end) / 2;
		
		if (key > arr[middle]) {
			// go up the list
			System.out.println("go up the list");
			return recursionBinarySearch(arr, key, middle+1, end);
			
		}
		if (key < arr[middle]) {
			//go down the list\
			System.out.println("go down the list");
			return recursionBinarySearch(arr, key, start, middle-1);
		}
		if (key == arr[middle]) {
			System.out.println(key + " match found at index " + middle);
			System.out.println("match found: " + key + "==" + arr[middle]);
			return middle;
		}
		return -1;
	}
	public static int binarySearch(int[] arr, int key) {
		//TODO
		
		int start = 0;
		int end = totalLines - 1;
		
		
		while (start <= end) {
			int mid = (start + end) / 2;
			
			if (key < arr[mid]) {
				end = mid - 1;
			}
			if (key > arr[mid]) {
				start = mid + 1;
			}
			if (key == arr[mid]) {
				return arr[mid];
			}
		}
		return -1;
	}
}
