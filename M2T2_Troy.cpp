/*
CSC 134
M2T1 - Receipt Calculator
Troy Reyes
1/24/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
cout << "M2T2" << endl;
// set up variables
string name; 
int num_apples;
double price_per_apple;
double total;

// ask user for their name
cout << "Hi, what's your name?";
cin >> name;
cout << "Nice to meet you, " << name << endl;
// ask how many apples
cout << "How many apples would you like?" ;
cin >> num_apples;
// ask price per apple
cout << "How much are they each? ";
cin >> price_per_apple;
// calculate the total price
total = num_apples * price_per_apple;

// print the output
// TODO: make a nice receipt
cout << endl;
cout << "Thank you for shopping with us." << endl; 
cout << endl;
 cout << "Number of apples "<<num_apples << "\t" <<endl;
 cout << "price per apple $" << price_per_apple <<endl;
cout << "------------------------------------------" << endl;
 cout << "Total" << "\t\t" << "$" << total << endl;
return 0; 
}