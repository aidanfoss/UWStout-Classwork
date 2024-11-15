
public class Email extends Document{
	private String sender;
	private String recipient;
	private String title;
	

	public Email() {
		sender = "";
		recipient = "";
		title = "";
	}
	public Email(String text, String sender, String recipient, String title) {
		super(text);
		this.sender = sender;
		this.recipient = recipient;
		this.title = title;
	}
	public String getSender() {
		return sender;
	}
	public void setSender(String sender) {
		this.sender = sender;
	}
	public String getRecipient() {
		return recipient;
	}
	public void setRecipient(String recipient) {
		this.recipient = recipient;
	}
	public String getTitle() {
		return title;
	}
	public void setTitle(String title) {
		this.title = title;
	}
	
	public String toString() {
		return getText() + " " + title + " " + sender + " " + recipient;
	}
	
	public boolean equals(Object obj) {
		if (obj instanceof Email) {
			return (sender == ((Email)obj).getSender()) && (recipient == ((Email)obj).getRecipient()) && (title == ((Email)obj).getTitle()) && 
		}
	}
}
