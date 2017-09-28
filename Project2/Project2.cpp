/*

Daniel Yahalom - 9/28 1st Period

Assignment Name : Take In Data

Asking the user questions and displaying the information from the answers

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std; //*

// Functions()

void pause() {

cout << "Press any key to continue . . .";

while (!_kbhit());

_getch();

cout << '\n';	
}

// MAIN

int main() {

int kittens;
float mittens;
bool writtens = false;
bool writtensPlaceholder;
cout << "hello fellow mortal. How many kittens do you own?\n";
cin >> kittens;
cout << "And how much mittens do they have?\n";
cin >> mittens;
cout << "And do they have writtens?";
cin >> writtensPlaceholder;
if(writtensPlaceholder == 'Y' || writtensPlaceholder == 'y' || writtensPlaceholder == 'T' || writtensPlaceholder == 't')
    writtens = true;

cout << "So you have " << kittens << " kittens,\n" << mittens << " mittens,\n" << "and it seems " << boolalpha << writtens << " that they have writtens. Goodday sir!";
pause(); // pauses to see the displayed text
return 0;
}