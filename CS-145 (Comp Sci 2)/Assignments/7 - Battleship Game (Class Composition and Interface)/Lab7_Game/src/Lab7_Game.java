
public class Lab7_Game {

	public static void main(String[] args) {
		//set up opponent
		Fleet opp = new Fleet();
		opp.deployFleet();
		opp.printFleet();
		System.out.println();
		
		boolean hit = false;
		
		do {
			Location fire = new Location();
			fire.fire();
			hit = opp.isHitNSink(fire);
			
			
			if (hit == true) {
				System.out.println("hit!");
			} 
			else {
				System.out.println("miss :(");
			}
			
			fire.pick();
			
		} while (opp.operational());
		
		
		System.out.println("congrats! youve destroyed the whole enemy fleet.");
	}

}
