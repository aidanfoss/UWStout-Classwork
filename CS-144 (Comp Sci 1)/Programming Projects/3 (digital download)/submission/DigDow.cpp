#include "DigDow.h"
#include <string>
#include <iostream>
using namespace std;

DigDow::DigDow(string title, string artist, string format, string year, string price) {
	this->title = title;
	this->artist = artist;
	this->format = format;
	this->year = year;
	this->price = price;
}

//Returns the title of the given object
string DigDow::GetTitle() const
{
	return title;
}

//Returns the artist of the given object
string DigDow::GetArtist() const
{
	return artist;
}

//Returns the format of the given object
string DigDow::GetFormat() const
{
	return format;
}

//Returns the year of the given object
string DigDow::GetYear() const
{
	return year;
}

//Returns the price of the given object
string DigDow::GetPrice() const
{
	return price;
}

//Returns the title, artist, format, price and year made of the given object
void DigDow::Display() 
{
	cout << title << " by " << artist << " in " << format << " form." << endl;
	cout << "made in " << year << ", and costs " << price << "$" << endl;
	cout << endl;
}