
public class Lab7_test {

	public static void main(String[] args) {
		
		//testing Location
		System.out.println("-------------Location Test--------------");
		
		Location loca1 = new Location();
		
		System.out.print("Should print <-1*> due to base location constructor: ");
		loca1.print(); //testing print function
		System.out.println();
		System.out.println();
		
		System.out.println("3 random locations 1-7 and a-g: ");
		loca1.pick(); //testing pick function #1
		loca1.print();
		System.out.println();
		loca1.pick(); //testing pick function #2
		loca1.print();
		System.out.println();
		loca1.pick(); //testing pick function #3
		loca1.print();
		System.out.println();
		System.out.println();
		
		loca1.fire(); //testing fire function
		System.out.println("x coordinate you just entered: " + loca1.getX());
		System.out.println("Y coordinate you just entered: " + loca1.getY());
		System.out.print("coordinate pair you just entered: ");					//verifying inputs went through correctly
		loca1.print();
		System.out.println();
		System.out.println();
		
		Location loca_1a = new Location(1,'a'); //testing working constructor
		System.out.println("loca2 - Should be <1,a> using constructor:");
		loca_1a.print();
		System.out.println();
		Location loca2 = new Location(2, 'b');
		System.out.println("loca3 - Should be <2,b> using constructor:");
		loca2.print();
		System.out.println();
		loca2.setX(1);	//testing setters
		loca2.setY('a'); //testing setters
		System.out.println("loca3 - Should be <1,a> using setters:");
		loca2.print();
		System.out.println();
		
		System.out.println("Should be true, comparing loca_1a and loca2 using equals:");
		System.out.println(loca_1a.equals(loca2)); //testing equals function
		System.out.println();
		
		
		System.out.println("-------------Ship Test--------------");
		Ship ship1 = new Ship();
		
		System.out.println("Ship.isSunk test, should be false: " + ship1.isSunk());
		System.out.println("testing Ship.sink()");
		ship1.sink();
		System.out.println("Ship.isSunk test, should be true: " + ship1.isSunk());
		
		System.out.println();
		
		Ship ship2 = new Ship();
		System.out.println("create second ship (ship2) and use Ship.setLocation to set its location to 1a");
		ship2.setLocation(loca_1a);
		System.out.print("location should be <1a> and should be up: ");
		ship2.printShip(); //testing Ship.printShip()
		
		System.out.println();
		System.out.println();
		Location ship2Loc = ship2.getLoc(); //testing getLoc()
		System.out.print("testing Ship.getLoc(), location should be <1a>: ");
		ship2Loc.print();
		
		ship1.setSunk(false);
		System.out.println();
		System.out.println();
		System.out.println("Ship.setSunk test, should be false: " + ship1.isSunk());

		
		
		
		
		System.out.println();
		System.out.println();
		System.out.println("-------------Fleet Test--------------");
		//testing fleet
		Fleet fleet1 = new Fleet();
		
		//Location shipOne = fleet1.getLocOfShip(); //workaround to get location of a ship to test hitandsink
		System.out.println("deployFleet and printFleet test, should be 7 random locations: ");
		fleet1.deployFleet();
		fleet1.printFleet();
		System.out.println();
		System.out.println();
		
		
		Location temp = fleet1.getLocOfShip(0);
		fleet1.isHitNSink(temp);
		//temp.print(); //reprint first location
		//System.out.println();
		System.out.println("isHitAndSink() and getLocOfShip() test " + fleet1.isHitNSink(temp));
		System.out.println();
		
		System.out.println("first ship should be sunk: ");
		fleet1.printFleet();
		System.out.println();
		System.out.println();

		System.out.println("Fleet.operational() test, should be true: "); //this includes the first ship being sunk, testing that too
		System.out.println(fleet1.operational());
		System.out.println();
		
		fleet1.Forfeit();
		System.out.println();
		System.out.println("Fleet.forfeit() + Fleet.operational test, should be false: ");
		System.out.println(fleet1.operational());
		System.out.println();
	}

}
