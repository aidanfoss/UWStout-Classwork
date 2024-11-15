import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class FileC extends Document{
	private String fileName;
	private int totalLines;

	public FileC(String fileNameIn) throws FileNotFoundException{ //massive constructor????
		super();
		this.fileName = fileNameIn;
		this.totalLines = 0;
		
		File file1 = new File(fileName);
		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(file1);
		do {
			scanner.nextLine();
			totalLines++;
		} while (scanner.hasNext());
		
		
		File file2 = new File(fileName);
		@SuppressWarnings("resource")
		Scanner scanner2 = new Scanner(file2);
		for (int i = 0; i < totalLines; i++) {
			this.addText(scanner2.nextLine());
		}

	} //end of constructor

	public int getTotalLines() {
		return totalLines;
	}

	@Override
	public String toString() {
		return getText() + " " + fileName;
	}
	
	
	public String getFileName() {
		return fileName;
	}

	public void setFileName(String fileName) {
		this.fileName = fileName;
	}

	public void setTotalLines(int totalLines) {
		this.totalLines = totalLines;
	}

	public boolean equals(Object obj) {
		if(obj instanceof FileC) {
			return this.fileName == ((FileC)obj).getFileName();
		}
		return false;
	}
	
	
}
