
import java.util.Random;
import java.util.Scanner;

public class Location implements LocationAPI{
	private final int FIELDSIZE = 7;
	private int x;
	private char y;

	

	public Location(int x, char y) {
		this.x = x;
		this.y = y;
	}
	public Location() {
		x = -1;
		y = '*';
	}
	
	
	public void pick() {
		//random point
		Random rand = new Random();
		x = rand.nextInt(FIELDSIZE) + 1;
		y = (char) (rand.nextInt(FIELDSIZE) + 97);
	}

	public void fire() {
		// get fire location
		Scanner input = new Scanner(System.in);
		System.out.println("What is the x coordinate youre firing at (1-7)");
		x = input.nextInt();
		input.nextLine();
		System.out.println("What is the y coordinate youre firing at (a-g)");
		String temp = input.nextLine();
		y = temp.charAt(0);
	}

	public void print() {
		// TODO Auto-generated method stub
		System.out.print("<" + x + y + "> ");
	}

	public boolean equals(Object obj) {
		boolean equal = false;
		if(obj instanceof Location) {
			if (this.x == ((Location) obj).x && this.y == ((Location) obj).y ) {
				equal = true;
			}
		}
		return equal;
	}


	public int getX() {
		return x;
	}


	public void setX(int x) {
		this.x = x;
	}


	public char getY() {
		return y;
	}


	public void setY(char y) {
		this.y = y;
	}
	
	
}
