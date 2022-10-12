#ifndef ARRAYDATA_H_
#define ARRAYDATA_H_
#include <string>

//**Specification for the ArrayData class. */
class ArrayData {
public:
	ArrayData();						//Initialize ArrayData object and read text file
	~ArrayData();						//Destroy ArrayData object when no longer needed
	int find(const int& value);			//finds value(int) in arrayData array, returns index or -1 if not found
	void update();	//updates integer value given (index, value), returns {0: new value, 1: old value}
	void push();						//add integer value to end of array by asking for user input
	void push(const int& value);		//add integer value to end of array from file
	void remove(const int& idx);		//removes value of given index, returns true if successful
private:
	void readData();					//reads data from file and assigns to arrayData array
	int arrayData[15];					//array to hold integers
	int current_size = 0;				//current size of array
	std::string source = "data.txt";	//filename that holds integers
	int max_size = 15;					//maximum size of array	
};
#endif // !ARRAYDATA_H