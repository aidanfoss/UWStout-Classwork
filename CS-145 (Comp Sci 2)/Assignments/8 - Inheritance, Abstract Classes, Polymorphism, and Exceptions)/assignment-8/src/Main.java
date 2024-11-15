import java.io.FileNotFoundException;

//import java.io.File;
//import java.io.FileNotFoundException;
//import java.util.Scanner;

public class Main {
	
	public static boolean ContainsKeyword(Document document, String keyword) {
		String doc = document.toString();
		//System.out.println("doc string: " + doc);
		if (doc.contains(keyword)) {
			return true;
		}
		else {
			return false;
		}
	}
	
	public static void main(String[] args) throws FileNotFoundException {
		// TODO Auto-generated method stub
		Email mail = new Email();
		mail.setText("body of text");
		mail.setSender("you");
		mail.setRecipient("me");
		mail.setTitle("homework help");
		
		
		System.out.println(ContainsKeyword(mail, "body"));
		System.out.println(ContainsKeyword(mail, "you"));
		System.out.println(ContainsKeyword(mail, "me"));
		System.out.println(ContainsKeyword(mail, "help"));
		//System.out.println("last check " + ContainsKeyword(mail, " "));
		
		System.out.println();
		System.out.println();
		
		FileC file = new FileC("words.txt");
		System.out.println(ContainsKeyword(file, "winner"));
		
		
	}

}
