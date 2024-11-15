#include <iostream>
#include <fstream>
#include <string>
#include "Song.h"

using namespace std;

int main()
{
	
	//declare pointer to the first playlist
	int* playList1Ptr = nullptr;
	//declare pointer to the second playlist
	int* playList2Ptr = nullptr;
	
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
	cout << numTracks << endl;
	//create a dynamic array of Songs to hold the first playlist of size numTracks
	Song** songArray = new Song*[numTracks]; //credit https://stackoverflow.com/a/20305639

	while (!infile.eof())
	{
		infile.ignore();  //consumes the new line character after the number 
		getline(infile, title);
		getline(infile, artist);
		infile >> minutes >> seconds;		
		
		if (!infile.fail())
		{
			songArray[trackNum] = new Song(title, artist, minutes, seconds); //credit https://stackoverflow.com/a/20305639
			//cout << songArray[trackNum] << endl;
			//cout << &songArray[trackNum] << endl << endl;
			
			trackNum++;
		}	
	}

	infile.close();
	cout << "Initial playlist" << endl << endl;

	//write a loop to display the songs in the playlist
	for (int i = 0; i < trackNum; i++) {
		songArray[i]->Display();
	}
	
	//******************************	lines below are for task #4  ******************

	//create a dynamic array of Songs for the second playlist that is one longer than the first playlist
	Song** songArray2 = new Song * [numTracks+1]; //credit https://stackoverflow.com/a/20305639

	//copy the songs from the first playlist to the second playlist
	for (int i = 0; i < numTracks; i++) {
		songArray2[i] = songArray[i];
	}
	
	
	cout << endl << "Add a song to the playlist" << endl;
	cout << "Enter Title: ";
	getline(cin, title);
	cout << "Enter Artist: ";
	getline(cin, artist);
	cout << "Enter the length of the song as the number of minutes followed by a space and the number of seconds: ";
	cin >> minutes >> seconds;
	cout << endl << "The new playlist" << endl << endl;

	//construct a song from the information and put it on the second playlist
	songArray2[numTracks] = new Song(title, artist, minutes, seconds);
	trackNum++;
	//write a loop to display the second playlist
	for (int i = 0; i < numTracks+1; i++) {
		songArray2[i]->Display();
	}
	//************lines above are for task #4 **************************************
	
	
	//reclaim the dynamic memory
	delete[] songArray;
	delete[] songArray2;
	//set the pointers to nullptr
	songArray = nullptr;
	songArray2 = nullptr;
	return 0;
}