package assignment3;

public class assignment3 {
	
	static String reverseString(String in) {
		int stringLength = in.length();
		String out = "";
		for (int i = stringLength; i > 0; i--) {
			out += in.charAt(i-1);
		}
		System.out.println(out);
		return out;
	}

	static String middleChar(String inn) {
		String out = "";
		int strLength = inn.length();
		int strMod = strLength % 2;
		if (strMod == 1) {
			strLength--;
			strLength = (strLength / 2);
			out += inn.charAt(strLength);
		}
		else {
			strLength = strLength / 2;
			out += inn.charAt(strLength-1);
			out += inn.charAt(strLength);
		}
		System.out.println(out);
		return out;
	}

	static int countChar(String innn, char inChar) {
		int strLength = innn.length();
		int counter = 0;
		for (int i = 0; i < strLength; i++) {
			if (innn.charAt(i) == inChar) {
				counter++;
			}
		}
		System.out.println(counter); //test
		return counter;
	}
	
	static int countWords(String wordsIn) {
		int counter = 1;
		boolean isWord = false;
		
		if (wordsIn == null) {
			return 0;
		}
		else {
			for (int i = 0; i < wordsIn.length(); i++) {
				if (wordsIn.charAt(i) == ' ') {
					if (isWord == true) {
						counter++;
					}
				}
				else { //if not space
					isWord = true;
				}
			}
		}
		System.out.println(counter); //test
		return counter;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String check = "check";
		String backwards = reverseString(check);
		System.out.println(backwards);
		
		middleChar("aaabeaaa"); //returns "be"
		middleChar("aaaabaaaa"); //returns "b"
		
		countWords("three words here");
	}

}