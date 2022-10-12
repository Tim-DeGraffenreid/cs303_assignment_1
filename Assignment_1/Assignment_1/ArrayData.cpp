#include <string.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <stdexcept>
#include "ArrayData.h"

using namespace std;

ArrayData::ArrayData()
{	
	this->readData();
}

ArrayData::~ArrayData()
{
}
//input: integer value 
//output: index of value
int ArrayData::find(const int& value)
{	
	int found = -1;
	//Iterate through array to find value
	for (int i = 0; i < current_size; i++) {
		if (arrayData[i] == value) {
			found = i;
			break;
		}
	}

	return found;
}
//input: index to update, update value 
//output: integer array return_values: {old value, new value}
void ArrayData::update()
{	cin.exceptions(ios_base::failbit);
	int old_value, new_value, index;
	while(true){
		try {
			while(true){
				cout << "Enter the index of the value you would like to update: ";
				cin >> index;
				if (index < 0 || index > current_size - 1) {
					throw out_of_range("The index you provided is out of range...");
				}
				break;
			}
			break;
		}
		catch (ios_base::failure& ex) {
			cerr << "Invalid number format input." << endl;			
			cin.clear();											
			cin.ignore(numeric_limits<streamsize>::max(), '\n');	

		}
		catch (out_of_range& ex) {
			cerr << "ERROR: " << ex.what() << endl;
		}
		catch (exception& ex) {
			cerr << "Fatal error occured in update()." << endl;
			cerr << ex.what() << endl;
			abort();
		}
		catch (...) {
			cerr << "Undefined exception occured in update()." << endl;
			abort();
		}
	} 
	while (true){
		try {
			cout << "Enter the new value you want for index " << index << " : ";
			cin >> new_value;
			break;
		}
		catch (ios_base::failure& ex) {
			cerr << "Invalid number format input" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		catch (exception& ex) {
			cerr << "Fatal error occured in update()." << endl;
			cerr << ex.what() << endl;
			abort();
		}
		catch (...) {
			cerr << "Undefined exception occured in update()." << endl;
			abort();
		}
	}
	old_value = arrayData[index];
	arrayData[index] = new_value;
	cout << "Updated from " << old_value << " to " << new_value << endl << endl;
}

//input: value to be added to end of array
void ArrayData::push()
{	
	cin.exceptions(ios_base::failbit);	//causes istream cin to throw the ios_base::failure exception when error flag ios_base::failbit is set i.e: incorrectly formatted input.
	int value = NULL;

	while (value == NULL) {
		try {
			cout << "Enter the value you would like to add to the array: ";
			cin >> value;
		}
		catch (ios_base::failure& ex) {
			cerr << "Invalid number format input." << endl;			// Notes/comments from stackoverflow for my understanding...
			cin.clear();											//cin.clear() clears the error flag on cin (so that future I/O operations will work correctly)
			cin.ignore(numeric_limits<streamsize>::max(), '\n');	//cin.ignore() skips to the next newline(to ignore anything else on the same line as the non - number so that it does not cause another parse failure)
																	//'\n' sets the delimiter, i.e.the character after which cin stops ignoring
																	//numeric_limits<streamsize>::max() sets the maximum number of characters to ignore.Since this is the upper limit on the size of a stream, you are effectively telling cin that there is no limit to the number of characters to ignore.
		}
		catch (std::exception& ex) {
			cerr << "Fatal error occured in push()" << endl;
			cerr << ex.what() << endl;
			abort();
		}
		catch (...) {
			cerr << "Undefined exception occured in push.()" << endl;
			abort();
		}
	}

	if (current_size == 0) {
		arrayData[0] = value;
	}
	else {
		arrayData[current_size] = value;
	}
	cout << value << " was added to the array." << endl << endl;
	//Increment size of array
	current_size++;
}
void ArrayData::push(const int& value)
{
	if (current_size == 0) {
		arrayData[0] = value;
	}
	else {
		arrayData[current_size] = value;
	}
	//Increment size of array
	current_size++;
}
//input: index to be removed from array
void ArrayData::remove(const int& index)
{	//check that index is in bounds
	if (index >= 0 && index < current_size - 1) {
		//Shift array one position to the left
		for (int i = index; i < current_size - 1; i++) {
			arrayData[i] = arrayData[i + 1];
		}
		//decrement size of array
		current_size--;
	}
}

void ArrayData::readData()
{
	string ln;
	ifstream inSS;
	//Read data from source file
	inSS.open(source, ios::in);
	//Add lines of integers to the array
	while (getline(inSS, ln))
	{
		push(stoi(ln));
	}

	inSS.close();
}
