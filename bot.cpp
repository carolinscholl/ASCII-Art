#include <iostream>
#include <unistd.h> // for sleep()
#include "ascii_functions.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cassert>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
using namespace std; 

// ======================================================================================

typedef struct AsciiImageStruct {
    char **data;
    int rows;
  } AsciiImage;


void convertTextToASCII(string disp, string filename, string text, char mainchar, char backchar){
  	string output_type = disp;
    string output_string = display(string(filename),string(text),char(mainchar),char(backchar));
    cout << output_string;
    cout << endl;   
}


AsciiImage ifzImage() {
	static char *lines[]={
    	"||||||||||||||||||||||||||||||",
    	"||           ||             ||",
    	"||          ||             || ",
    	"||         ||             ||  ",
    	"||         ||            ||   ",
    	"||         ||           ||    ",
    	"||         ||          ||     ",
    	"||         ||         ||      ",
    	"||         ||        ||       ",
    	"||         ||       ||        ",
    	"||         ||      |||||||||||",
    };
    	return (AsciiImage){lines, 11};
    }



AsciiImage getBenjamin() {
	static char *lines[]={
    	"|||  |||| |   |   |  ||  |   | | |   |",
    	"|  | |    ||  |   | |  | || || | ||  |",
    	"|||  |||  | | |   | |||| | | | | | | |",
    	"|  | |    |  ||   | |  | |   | | |  ||",
    	"|||  |||| |   | ||  |  | |   | | |   |",
    	"                                      ",
    	"|||| |||  >    < |  | |    |  ||| |  |",
    	"|    |  |   ||   |  | |    | |    |  |",
    	"|||  |||   |  |  |||| |    | |    ||||",
    	"|    |  |  |  |  |  | |    | |    |  |",
    	"|    |  |   ||   |  | |||| |  ||| |  |",
    };
    	return (AsciiImage){lines, 11};
    }


void printAsciiImage(AsciiImage img) {
    int i;
    for(i=0; i<img.rows; i++) {
        printf("%s\n", img.data[i]);
    }
    printf("\n");
}


int getRandomNumber(int min, int max){
	int randNum = rand()%(max-min + 1) + min;
	return randNum;
}


void printmatrix(int rows, int cols){
	for(int k=0; k<rows; k++){
				for(int j=0; j<cols; j++){
					int b = 1;
					cout << " " << b;
				}
				cout << endl; 	 
				usleep(10000);
			}
}


int main(){

	int halfsecond = 500000;
	int tenthsecond = 100000;
 	string s;


	cout << endl; 
	cout << "Setting up bot..." << endl; 
	usleep(300000);
	usleep(300000);
	cout << endl; 
	cout << "Connecting..." << endl; 
	usleep(halfsecond);
    cout << "\b\\" << flush;
	usleep(halfsecond);
    cout << "\b|" << flush;
	usleep(halfsecond);
    cout << "\b/" << flush;
	usleep(halfsecond);
    cout << "\b-" << flush;
	cout << endl; 
	cout << "Connected." << endl; 
	cout << endl; 
	cout << "Starting conversation..." << endl; 
	sleep(1);
	cout << endl;


	cout << "Hey. How can I help you today?" << endl; 
	cout << "> "; 
	getline(cin,s); // "hi"
	cout << endl;

	
	cout << "Ok. Please enter a date: " << endl; 
	cout << "> ";
	getline(cin, s); 
	cout << endl; 
	

	cout << "Searching for matches..."<< endl; 
	usleep(400000);
    cout << "\b\\" << flush;
	usleep(400000);
    cout << "\b|" << flush;
	usleep(400000);
    cout << "\b/" << flush;
	usleep(400000);
    cout << "\b-" << flush;
    usleep(400000);
    cout <<"\b " << flush; 
	cout << endl; 
	cout << "Found 1 event! Display?" << endl; 

	cout << "> "; 
	getline(cin,s); 
	cout << endl; 
	for(int i = 0; i<10; i++){
		cout << endl; 
	}

	
	printAsciiImage(ifzImage());
	cout << ">>>>>>>>>> closing <<<<<<<<<<<" << endl; 

	cout << endl; 

	
	sleep(1);

	cout << "Last chance before" << endl; 
	for(int i = 0; i<5; i++){
		cout << "summer break" << endl; 
		usleep(100000);
	}
	cout << endl;


	cout << "> "; 
	getline(cin,s); // display artists
	cout << endl; 
	cout << "Loading..." << endl; 
	usleep(450000);
    cout << "\b\\" << flush;
	usleep(450000);
    cout << "\b|" << flush;
	usleep(450000);
    cout << "\b/" << flush;
	usleep(450000);
    cout << "\b-" << flush;
	cout << endl; 

	
	// TRAKT I 
	for(int i= 1; i<=50; i++){
		for(int j=1; j<=getRandomNumber(1,2); j++){
			cout << " TRAKT #0000 0001   ";
		}
		usleep(10000);
 		cout << endl; 
	}
	cout << endl; 
	printmatrix(25,36);

	usleep(halfsecond);


	// ACRONYM 
	for(int k=0; k<3; k++){
		for(int i=0; i<20000; i++){
			int anz=getRandomNumber(1,100);
			for(int j=0; j<anz; j++){
				cout << " "; 
			}
			cout << "ACRONYM";
			}
		cout << endl; 
		usleep(150000);
	}

	cout << endl; 
	convertTextToASCII("display", "font.txt", "ACRONYM", '0', ' ');
	//convertTextToASCII("display", "font.txt", "NYM", '0', ' ');
	usleep(halfsecond);


	// Erika
	for(int k=0; k<3; k++){
		for(int i=0; i<20000; i++){
			int anz=getRandomNumber(1,100);
			for(int j=0; j<anz; j++){
				cout << " "; 
			}
			cout << "ERIKA";
			}
		cout << endl; 
		usleep(150000);
	}

	convertTextToASCII("display", "font.txt", "ERIKA", '@', ' ');
	usleep(halfsecond);


	// N.akin
	for(int k=0; k<3; k++){
		for(int i=0; i<20000; i++){
			int anz=getRandomNumber(1,100);
			for(int j=0; j<anz; j++){
				cout << " "; 
			}
			cout << "N.AKIN";
			}
		cout << endl; 
		usleep(150000);
	}

	convertTextToASCII("display", "font.txt", "N.AKIN", '&', ' ');	
	usleep(halfsecond);



	// Perm
	for(int k=0; k<3; k++){
		for(int i=0; i<20000; i++){
			int anz=getRandomNumber(1,100);
			for(int j=0; j<anz; j++){
				cout << " "; 
			}
			cout << "PERM";
			}
		cout << endl; 
		usleep(150000);
	}

	convertTextToASCII("display", "font.txt", "PERM", '$', ' ');	
	usleep(halfsecond);


	// Solaris
	for(int k=0; k<3; k++){
		for(int i=0; i<20000; i++){
			int anz=getRandomNumber(1,100);
			for(int j=0; j<anz; j++){
				cout << " "; 
			}
			cout << "SOLARIS";
			}
		cout << endl; 
		usleep(150000);
	}

	convertTextToASCII("display", "font.txt", "SOLARIS", '#', ' ');	
	//convertTextToASCII("display", "font.txt", "RIS", '#', ' ');	


	usleep(halfsecond);


	// Trakt 2

	for(int k= 0; k<10; k++){
		for(int j=1; j<=k; j++){
			 cout << " "; 
			}
		cout << "TRAKT       0000 0010       2" << endl; 
			usleep(60000);}
	
	for(int k=0; k<=10; k++){
		for(int j=k; j<10; j++){
			cout << " ";
			}
		cout << "TRAKT       0000 0010       2" << endl; 
			usleep(40000);	
		}

	usleep(halfsecond);
	

	// Benjamin Fröhlich
	for(int k=0; k<3; k++){
		for(int i=0; i<20000; i++){
			int anz=getRandomNumber(1,100);
			for(int j=0; j<anz; j++){
				cout << " "; 
			}
			cout << "BENJAMIN FRÖHLICH";
			}
		cout << endl; 
		usleep(150000);
	}


	//sleep(1);
	printAsciiImage(getBenjamin());
	//usleep(halfsecond);
	//usleep(200000);
	//convertTextToASCII("display", "font.txt", "BENJAMIN", '0', ' ');	
	//convertTextToASCII("display", "font.txt", "FROEHLICH", '0', ' ');	

	usleep(halfsecond);
	usleep(200000);

	// LEONCE
	for(int k=0; k<3; k++){
		for(int i=0; i<20000; i++){
			int anz=getRandomNumber(1,100);
			for(int j=0; j<anz; j++){
				cout << " "; 
			}
			cout << "LEONCE";
			}
		cout << endl; 
		usleep(150000);
	}
	convertTextToASCII("display", "font.txt", "LEONCE", '$', ' ');	
	
	usleep(halfsecond);


	// WILHELM
	for(int k=0; k<3; k++){
		for(int i=0; i<20000; i++){
			int anz=getRandomNumber(1,100);
			for(int j=0; j<anz; j++){
				cout << " "; 
			}
			cout << "WILHELM";
			}
		cout << endl; 
		usleep(150000);
	}
	cout << endl; 
	convertTextToASCII("display", "font.txt", "WILHELM", '|', ' ');	
	//convertTextToASCII("display", "font.txt", "HELM", '#', ' ');	

	usleep(halfsecond);
	usleep(200000);


	// FAQ
	for(int k=0; k<3; k++){
		for(int i=0; i<20000; i++){
			int anz=getRandomNumber(1,100);
			for(int j=0; j<anz; j++){
				cout << " "; 
			}
			cout << "FAQ";
			}
		cout << endl; 
		usleep(150000);
	}
	convertTextToASCII("display", "font.txt", "FAQ", '%', ' ');	
	
	usleep(halfsecond);

	for(int i = 1; i<=21; i++){
		if(i == 21){
			cout << "\nImport event into calender and return?\n" ; 
		}
		else{
			cout << " " << endl; 
			usleep(50000);
		}
	}
	
	
	cout << "> "; 
	getline(cin,s); 
	
    cout << endl; 

    cout << "Date saved: \nSaturday, 22-07-2017   23:59:00" << endl; 
    cout << endl; 
	printAsciiImage(ifzImage());

    cout << "See you there." << endl; 
    
	sleep(2);
    cout << "\nDisconnected.\n-" << endl; 
    sleep(1);
    //getline(cin, s);

    /*for(int i = 0; i<2000000; i++)
		printAsciiImage(getifzImage2());
		for(int i=0; i<50000; i++){
			printAsciiImage(getifzImage2());
			}
		usleep(150000);
	*/

    return 0; 
}



