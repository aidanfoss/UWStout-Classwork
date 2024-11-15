
public class Ship implements ShipAPI{
	private boolean sunk;
	private Location loc = new Location();
	
	Ship() {
		sunk = false;
		loc.pick();
	}

	@Override
	public boolean match(Location location) {
		if (loc.equals(location)){
			return true;
		}
		return false;
	}

	@Override
	public boolean isSunk() {
		if (sunk == true) {
			return true;
		}
		return false;
	}

	@Override
	public void sink() {
		// TODO Auto-generated method stub
		sunk = true;
	}

	@Override
	public void setLocation(Location location) {
		loc.setX(location.getX());
		loc.setY(location.getY());
	}

	@Override
	public void printShip() {
		loc.print();
		if (sunk == true) {
			System.out.print("sunk");
		}
		if (sunk == false) {
			System.out.print("up");
		}
	}

	public Location getLoc() {
		return loc;
	}

	public void setSunk(boolean sunk) {
		this.sunk = sunk;
	}
	
	

	
}
