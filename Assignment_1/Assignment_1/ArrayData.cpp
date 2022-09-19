#include <string.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
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
int* ArrayData::update(int index, int value)
{	
	static int return_values[2];
	//Check that index is in bounds
	if (index < current_size - 1) {
		return_values[1] = arrayData[index];
		arrayData[index] = value;
		return_values[0] = value;
	}

	return return_values;
}
//input: value to be added to end of array
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
