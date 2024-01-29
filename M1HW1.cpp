/*
CSC 134
M1HW1 - Oppenheimer
Troy Reyes
1/24/2024
*/
#include <iostream>
using namespace std;

int main() {
    // Movie information program
    string movie_name = "Oppenheimer"; //
    int release_year = 2023;
    double box_office_gross = 327; // in million dollars

    cout << "Welcome to the Movie Database." << endl;
    cout << "Movie: " << movie_name << endl;
    cout << "Year of Release: " << release_year << endl;
    cout << "Box Office Gross: $" << box_office_gross << " million" << endl;
    cout << endl;

    // Quotes from the movie
    cout << "Quotes from " << movie_name << ":" << endl;
    cout << "1. \"Zero would be nice.\" - Gen. Leslie Groves" << endl;
    cout << "2. \"We're not convicting – just denying.\" - Lewis Strauss" << endl;
    cout << "Favorite Scene: Oppenheimer's speech at the auditorium" << endl;
    cout << "Interesting Fact: The Trinity Test recreation was filmed without special effects." << endl;

    return 0;
}