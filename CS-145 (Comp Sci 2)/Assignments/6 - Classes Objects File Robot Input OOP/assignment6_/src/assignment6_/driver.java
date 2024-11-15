package assignment6_;

import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class driver {
	public static int totalLines(String fileName) throws FileNotFoundException {
		File file1 = new File(fileName);
		Scanner scanner = new Scanner(file1);
		
		int totalLines = 0;
		
		do {
			scanner.nextLine();
			totalLines++;
		} while (scanner.hasNext());
		
		scanner.close();
		return totalLines;
	}
	
	public static void main(String[] args) throws IOException {
		String[] words = new String[5];

		System.out.println("word is: " + words[0]);
		File passwords = new File("passwords-1.txt"); //opens passwords file
		Scanner scanPas = new Scanner(passwords); // used to read the passwords
		
		Scanner scanner = new Scanner(System.in); // used to get an input for password check
		System.out.println("input password");
		String inputpass = scanner.nextLine();

		
		int numPass = totalLines("passwords-1.txt");
		//System.out.println(numPass); //test
		
		int numTaskIndividual = totalLines("logfile-1.txt");
		//System.out.println(numTask); //test
		int numTask = numTaskIndividual / 5;
		
		//make an array of all the passwords in the list
		List<String> passVec = new ArrayList<String>();
		for (int i = 0; i < numPass; i++) {
			passVec.add(scanPas.nextLine());
		}
		//System.out.println(passVec.size()); // testing how many passwords are stored
		
		
		//test input password against all passwords stored in List
		Boolean inputTest = false;
		for (int i = 0; i < numPass; i++) {
			if (passVec.contains(inputpass)) {
				inputTest = true;
			}
		}
		
		
		if (inputTest == true) {
			System.out.println("correct password!");
			
			robot.taskFile("logfile-1.txt", numTask);
		}
		//dont touch below this in main
		else {
			System.out.println("false password, relaunch program");
		}
		scanner.close();
	}
	
}
