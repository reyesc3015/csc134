
/*
CSC 134
M4LAB1 - ASCII art
name
3/4/2024
Ask user for width and length
Draw rectangle of that size.
*/

#include <iostream>
using namespace std;

int main()
{

cout << "ASCII Rectangles" << endl;
//ut << "#" << endl;
int width = 6;
int height = 5;

//with while loop
    int count=0;
    while (count < width) {
        cout << "#";
        count++;
    }
//with for loop
for (int i=0; i<width; i++){
    cout << "# ";
}
cout << endl; // new line
cout << "print " << height << " lines" << endl;
for (int i=0; i<height; i++) {
    cout << "#" << endl;
}
cout << "Do both -- print rectangle" << endl;
cout << endl;
for (int i=0; i<height; i++){
        for (int j=0; j<width; j++){
        cout << "# ";
        }
        cout << endl; //new line
}
return 0;
}
