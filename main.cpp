///******************************************************************************
//Description: This program will print a list of movies with their year of 
//release, title, and screenwriter using a vector and a Movie class.
//Author: Jared Melendez
//COMSC 210 Section 5293
//Date September 23, 2024
//Status: Done
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
void dataRead(vector<Movie> &);
//Declare and initilize variable
const int SIZE = 4;
//the main function
int main()
{
    //Declare and initilize variable
    vector<Movie> movies;
    //calls the dataRead function
    dataRead(movies);
    //for loop that iterates through the movies vector
    for (Movie movie : movies)
    {
        //calls print method
        movie.print();
        cout << endl;
    }
}
//the dataRead function
void dataRead(vector<Movie> &vector)
{
    //declare and initilize variables
    ifstream ifs;
    Movie temp;
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
            //sets each value to a temp variable
            getline(ifs,title);
            ifs >> year;
            ifs.ignore();
            getline(ifs,screenwriter);
            //sets each private variable for the temp Movie variable
            temp.setTitle(title);
            temp.setYear(year);
            temp.setScreenWriter(screenwriter);
            //pushs the temp Movie variable into the vector
            vector.push_back(temp);
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