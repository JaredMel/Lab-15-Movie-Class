///******************************************************************************
//Description: This program will 
//Author: Jared Melendez
//COMSC 210 Section 5293
//Date September 23, 2024
//Status: WIP
///******************************************************************************

#include <iostream>
using namespace std;
//the Movie class
class Movie 
{
    private:
        //private variables
        string screenWriter;
        int year;
        string title;
    public:
        //getters and setters
        string getScreenWriter() {return screenWriter;}
        int getYear() {return year;}
        string getTitle() {return title;}
        void setScreenWriter(string sw) {screenWriter = sw;}
        void setYear(int y) {year = y;}
        void setTitle(string t) {title = t;}
        //print method
        void print()
        {
            //Prints values
            cout << "Screenwriter: " << screenWriter << endl;
            cout << "Year released: " << year << endl;
            cout << "Movie: " << title << endl;
        }
};

//the main function
int main()
{
    
}