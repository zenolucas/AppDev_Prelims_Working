#include "ClinicDashboardGui.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream> 
#include <chrono> 
#include <thread> 
using namespace std;

int dashboard(string username, string clinicPostfix)
{
	while (true)
	{
		// dashboard wants to know which txt file you want to modify,
		// hence parameters should be username and clinic number
		

		// now to open specific clinic database with ifstream
		string fileLocation = "Resource Files/database/clinic_" + clinicPostfix + ".txt";
		ifstream filereader{ fileLocation };
		ofstream filewriter;

		// to handle errors if file cannot be opened.
		if (!filereader)
		{
			cerr << "file could not be opened." << endl;
		}

		// returns true if .txt file is empty
		bool empty = filereader.peek() == ifstream::traits_type::eof();

		while (empty)
		{
			cout << "there is currently no one in queue." << endl;
			filereader.close();
			// let thread sleep for 5 seconds before checking txt file again.
			this_thread::sleep_for(std::chrono::seconds(5));
			filereader.open(fileLocation);
			empty = filereader.peek() == ifstream::traits_type::eof();
		}

		// if queue is not empty, display latest queue and present staff options.
		string queueNumber;
		getline(filereader, queueNumber);
		cout << "current queue number is " << queueNumber << endl;
		filereader.close();

		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			
			cout << "(broadcast) queue number " << queueNumber << ". Please proceed to Clinic " << clinicPostfix << endl;
			break;

			// delete first line in a given clinic queue.
		case 2:
		{
			filereader.open(fileLocation);
			// opens file in write mode
			filewriter.open("Resource Files/database/temp.txt", ofstream::out);
			string line;


			// to skip/read first line
			getline(filereader, line);
			// to start reading from 2nd line
			getline(filereader, line);

			bool firstLine = true;
			while (filereader)
			{
				// to handle pesky bug for the first line
				if (firstLine)
				{
					filewriter << line;
					firstLine = false;
					getline(filereader, line);
				}
				else
				{
					cout << line << endl;
					filewriter << "\n" << line;
					getline(filereader, line);
				}
			}

			// close filereader and filewriter
			filereader.close();
			filewriter.close();

			// delete original file
			remove(fileLocation.c_str());
			// rename temporary file
			string fileName = "Resource Files/database/clinic_" + clinicPostfix + ".txt";
			rename("Resource Files/database/temp.txt", fileName.c_str());
			break;
		}

		case 3:
			return 0;
		default:
			cout << "invalid input, please try again." << endl;
			break;
		}
	}
	return 0;
}

