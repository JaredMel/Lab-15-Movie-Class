///******************************************************************************
//Description: This program will 
//Author: Jared Melendez
//COMSC 210 Section 5293
//Date September 23, 2024
//Status: WIP
///******************************************************************************

#include <iostream>
#include <vector>
#include <fstream>
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
//Prototype function
Movie dataRead();
//Declare and initilize variable
const int SIZE = 4;
//the main function
int main()
{
    
}
//the dataRead function
Movie dataRead()
{
    //declare and initilize variables
    ifstream ifs;
    string screenwriter, title;
    int year;
    //opens files
    ifs.open("data.txt");
    //check if file was found
    if (ifs)
    {
        //reads the values in the file
        for (size_t i = 0; i < SIZE; i++)
        {
            ifs >> hours;
            //sets the values of the vector to the values in the file
            vector.push_back(hours);
        }
        ifs.close();
    }
    else
    {
        //prints and exits cause the file wasn't found
        cout << "Error opening file" << endl;
        exit(EXIT_FAILURE);
    }
}