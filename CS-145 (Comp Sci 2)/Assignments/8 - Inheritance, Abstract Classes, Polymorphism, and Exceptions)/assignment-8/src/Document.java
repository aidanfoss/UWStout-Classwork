
abstract class Document {
	private String text;

	public Document() {
		super();
	}

	public Document(String text) {
		//super();
		this.text = text;
	}

	public String getText() {
		return text;
	}

	public void setText(String text) {
		this.text = text;
	}
	public void addText(String add) {
		this.text = this.text + " " + add;
	}

	public String toString() {
		return text;
	}
	public boolean equals(Object obj) {
		if (obj instanceof Document) {
			return text == ((Document)obj).getText();
		}
		return false;
	}
	
	
	
}
