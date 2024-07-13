#include <iostream>
#include <string>
using namespace std;

void AgeAndTime();
void MadLibs();


int main() {

    AgeAndTime();

    cout << "\nLet's play a game of Mad Libs! \n";
        MadLibs();

	return 0;
}


void MadLibs() {
    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    cin >> color;
    cout << "Enter a plural noun: ";
    cin >> pluralNoun;
    cout << "Enter a celebrity: ";
    cin >> celebrity;

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;
}


void AgeAndTime() {
    //Enter your name
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Hello " << name << endl;

    //Boolean Voting/Smoking Age
    int myAge = 26;
    int votingAge = 18;
    int smokingAge = 21;
    cout << "Enter your age: ";
    cin >> myAge;

    if (myAge >= votingAge && myAge >= smokingAge) {
        cout << "You are allowed to legally vote and smoke! \n";
    }
    else if (myAge < smokingAge && myAge >= votingAge) {
        cout << "You are too young to smoke, but old enough to vote! \n";
    }
    else if (myAge <= votingAge && myAge <= smokingAge) {
        cout << "You are too young to smoke or vote. \n";
    }
    //1 is true, 0 is false

    int time = 22;
    cout << "What hour of the day is it? ";
    cin >> time;
    if (time < 10) {
        cout << "Good morning.";
    }
    else if (time < 20) {
        cout << "Good day.";
    }
    else {
        cout << "Good evening.";
    }
    // Outputs "Good evening."
}