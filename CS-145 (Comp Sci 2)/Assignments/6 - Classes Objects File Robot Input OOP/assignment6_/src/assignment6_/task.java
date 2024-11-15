package assignment6_;
//package assignment6;

public class task {
	private String task;
	private String time;
	private String length;
	private String date;
	private int prio; //priority
	
	public task() {
		task = "task";
		time = "time";
		length = "length";
		date = "date";
		prio = 999;
	}
	
	public void settask(String newtask) {
		task = newtask;
	}
	public void settime(String newtime) {
		time = newtime;
	}
	public void setlength(String newlength) {
		length = newlength;
	}
	public void setdate(String newdate) {
		date = newdate;
	}
	public void setprio(int newprio) {
		prio = newprio;
	}
	
	public String gettask() {
		return task;
	}
	public String gettime() {
		return time;
	}
	public String getlength() {
		return length;
	}
	public String getdate() {
		return date;
	}
	public int getprio() {
		return prio;
	}
}
