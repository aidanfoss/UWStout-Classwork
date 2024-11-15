package grades;
import java.util.*;

public class grades {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double midTerm1 = -1;
		double midTerm2 = -1;
		double finalExam = -1;
		double assignments = -1;
		do {
			System.out.println("Score of midterm one out of 100: ");
			midTerm1 = sc.nextDouble();
		} while (!((midTerm1 >= 0) && (midTerm1 <= 100)));
		
		do {
		System.out.println("Score of midterm two out of 100: ");
		midTerm2 = sc.nextDouble();
		} while (!((midTerm2 >= 0) && (midTerm2 <= 100)));
		
		do {
		System.out.println("Score of final exam out of 100: ");
		finalExam= sc.nextDouble();
		} while (!((finalExam >= 0) && (finalExam <= 100)));
		
		do {
		System.out.println("Score of assignments out of 100: ");
		assignments = sc.nextDouble();
		} while (!((assignments >= 0) && (assignments <= 100)));
		midTerm1 = midTerm1 * .15;
		midTerm2 = midTerm2 * .15;
		finalExam = finalExam * .2;
		assignments = assignments * .5;
		
		double finalGrade = midTerm1 + midTerm2 + finalExam + assignments;
		
		System.out.println(finalGrade);
		if (finalGrade > 60) {
			if (finalGrade > 70) {
				if (finalGrade > 73) {
					if (finalGrade > 78) {
						if (finalGrade > 80) {
							if (finalGrade > 83) {
								if (finalGrade > 88) {
									if (finalGrade > 90) {
										if (finalGrade > 93) {
											System.out.println("A");
										}
										else {
											System.out.println("A-");
										}
									}
									else {
										System.out.println("B+");
									}
								}
								else {
									System.out.println("B");
								}
							}
							else {
								System.out.println("B-");
							}
						}
						else {
							System.out.println("C+");
						}
					}
					else {
						System.out.println("C");
					}
				}
				else {
					System.out.println("C-");
				}
			}
			else {
				System.out.println("D");
			}
		}
		else {
			System.out.println("F");
		}
	}

}
