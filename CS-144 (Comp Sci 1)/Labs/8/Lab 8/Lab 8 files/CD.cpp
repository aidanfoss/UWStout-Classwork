#include <iostream>
#include <fstream>
#include <string>
#include "Song.h"

using namespace std;

int main()
{
	
	//declare pointer to the first playlist
	//declare pointer to the second playlist
	
	ifstream infile;
	int numTracks;
	string title;
	string artist;
	int minutes;
	int seconds;
	string newline;
	int trackNum = 0;

	infile.open("cdTracks.txt");
	if (!infile.is_open())
	{
		cout << "Could not open file." << endl;
		return 1;
	}
	
	infile >> numTracks;

	//create a dynamic array of Songs to hold the first playlist of size numTracks
	
	
	while (!infile.eof())
	{
		infile.ignore();  //consumes the new line character after the number 
		getline(infile, title);
		getline(infile, artist);
		infile >> minutes >> seconds;		
		
		if (!infile.fail())
		{
			//construct a Song from the information and put it in the playlist
			
			trackNum++;
		}	
	}

	infile.close();
	cout << "Initial playlist" << endl << endl;

	//write a loop to display the songs in the playlist
	
	
/******************************	lines below are for task #4  ******************

	//create a dynamic array of Songs for the second playlist that is one longer than the first playlist
	

	//copy the songs from the first playlist to the second playlist
	
	
	cout << endl << "Add a song to the playlist" << endl;
	cout << "Enter Title: ";
	getline(cin, title);
	cout << "Enter Artist: ";
	getline(cin, artist);
	cout << "Enter the length of the song as the number of minutes followed by a space and the number of seconds: ";
	cin >> minutes >> seconds;
	cout << endl << "The new playlist" << endl << endl;

	//construct a song from the information and put it on the second playlist
	
	//write a loop to display the second playlist
	
	************lines above are for task #4 **************************************/
	
	
	//reclaim the dynamic memory
	

	//set the pointers to nullptr
	

	return 0;
}