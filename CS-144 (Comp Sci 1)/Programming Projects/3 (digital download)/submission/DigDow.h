#pragma once
#include <string>
using namespace std;

class DigDow {
private:
	string title;
	string artist;
	string format;
	string year;
	string price;
public:
	DigDow(string title = "unknown", string artist = "unknown", string format = "unknown", string year = 0, string price = 0);
	string GetArtist() const; //returns the artist
	string GetTitle() const; //returns the title
	string GetFormat() const; //returns the format
	string GetYear() const; //returns the year
	string GetPrice() const; //returns the price
	void Display(); //returns all of the above

};