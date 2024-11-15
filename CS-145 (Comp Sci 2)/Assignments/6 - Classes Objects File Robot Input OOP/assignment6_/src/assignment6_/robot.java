package assignment6_;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class robot {
	private int temp;
	
	
	
	public static void taskFile(String fileName, int numTask) throws FileNotFoundException {
		File logFile = new File(fileName); //allow reading of logfile
		Scanner log = new Scanner(logFile);
		
		task[] arrayTask=new task[numTask]; //make an array of task objects with the right size (in this case, 4)
		
		for (int i = 0; i < numTask; i++) {
			arrayTask[i] = new task();
			arrayTask[i].settask(log.nextLine());
			//System.out.println(arrayTask[i].gettask());
			arrayTask[i].settime(log.nextLine());
			//System.out.println(arrayTask[i].gettime());
			arrayTask[i].setlength(log.nextLine());
			//System.out.println(arrayTask[i].getlength());
			arrayTask[i].setdate(log.next());
			//System.out.println(arrayTask[i].getdate());
			//log.nextLine();
			arrayTask[i].setprio(log.nextInt());
			//System.out.println(arrayTask[i].getprio());
			if(log.hasNext()) {
				log.next();
			}
		}
	
		//(arrayTask[k].get())
		
		int taskCount = 0;
		for(int k = 0; k < numTask; k++) {
			if ((arrayTask[k].getprio()) == 1) {
				taskCount++;
				System.out.println("------------------------------------------");
				System.out.println("Task " + taskCount + ":");
				System.out.println("description: " + (arrayTask[k].gettask()));
				System.out.println("Time: "+ (arrayTask[k].gettime()));
				System.out.println("Duration: " + (arrayTask[k].getlength()));
				System.out.println("Date: " + (arrayTask[k].getdate()));
				System.out.println("priority: " + arrayTask[k].getprio());
			}
		}
		for(int k = 0; k < numTask; k++) {
			if ((arrayTask[k].getprio()) == 2) {
				taskCount++;
				System.out.println("------------------------------------------");
				System.out.println("Task " + taskCount + ":");
				System.out.println("description: " + (arrayTask[k].gettask()));
				System.out.println("Time: "+ (arrayTask[k].gettime()));
				System.out.println("Duration: " + (arrayTask[k].getlength()));
				System.out.println("Date: " + (arrayTask[k].getdate()));
				System.out.println("priority: " + arrayTask[k].getprio());
			}
		}
		for(int k = 0; k < numTask; k++) {
			if ((arrayTask[k].getprio()) == 3) {
				taskCount++;
				System.out.println("------------------------------------------");
				System.out.println("Task " + taskCount + ":");
				System.out.println("description: " + (arrayTask[k].gettask()));
				System.out.println("Time: "+ (arrayTask[k].gettime()));
				System.out.println("Duration: " + (arrayTask[k].getlength()));
				System.out.println("Date: " + (arrayTask[k].getdate()));
				System.out.println("priority: " + arrayTask[k].getprio());
			}
		}
		log.close();
		
		
	}
}
