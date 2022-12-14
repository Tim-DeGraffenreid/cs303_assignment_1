#include "functions.h"
#include "ArrayData.h"
using namespace std;

//input: ArrayData object
void process(ArrayData& data) {
    while (true) {
        int choice, index, value;
        choice = mainMenu();

        switch (choice) {
        case 0:
            cout << "Enter the value you would like to find the index for: ";
            cin >> value;
            index = data.find(value);
            cout << "The index of the value " << value << " is " << index << endl << endl;
            break;
        case 1:
            data.update();
            break;
        case 2:
            data.push();
            break;
        case 3:
            cout << "Enter the index of the value you would like to remove: ";
            cin >> index;
            data.remove(index);
            cout << "Index " << index << " has been removed from the array." << endl << endl;
            break;
        case 4:
            exit(0);
            break;
        }
    }
}
//output: user's menu choice
int mainMenu() {
    int userChoice = -1;
    //Ensure user's choice is in bounds
    while (!(userChoice >= 0 && userChoice <= 4)) {
        cout << "Main Menu" << endl;
        cout << "0: Find index by value." << endl;
        cout << "1: Update value by index." << endl;
        cout << "2: Add integer to array." << endl;
        cout << "3: Remove value by index." << endl;
        cout << "4: Exit program." << endl;
        cout << "Enter choice: " << endl;
        cin >> userChoice;
    }

    return userChoice;
}
