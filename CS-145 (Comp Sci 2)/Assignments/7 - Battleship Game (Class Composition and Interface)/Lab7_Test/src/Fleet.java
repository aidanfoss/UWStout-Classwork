
public class Fleet implements FleetAPI {
	private final int fleetSize = 7;
	private Ship ships[] = new Ship[fleetSize];
	
	
	public void deployFleet() {
		for (int i = 0; i < fleetSize; i++) {
			ships[i] = new Ship();
		}
	}

	public boolean operational() {
		for (int i = 0; i < fleetSize; i++) {
			if ( (ships[i].isSunk()) == false ) {
				return true;
			}
		}
		return false;
	}

	public boolean isHitNSink(Location location) {
		for (int i = 0; i < fleetSize; i++) {
			if (ships[i].match(location)) {
				ships[i].sink();
				return true;
			}
		}
		return false;
	}

	public void printFleet() {
		for (int i = 0; i < fleetSize; i++) {
			//System.out.println("ship # " + i + ":");
			ships[i].printShip();
			System.out.print(", ");
		}
	}

	public int check(Location location) {
		// TODO Auto-generated method stub
		return 0;
	}
	
	public Location getLocOfShip(int shipNum) {
		Location temp = ships[shipNum].getLoc();
		return temp;
	}

	public void Forfeit() {
		for (int i = 0; i < fleetSize; i++) {
			ships[i].sink();
		}
	}
}
