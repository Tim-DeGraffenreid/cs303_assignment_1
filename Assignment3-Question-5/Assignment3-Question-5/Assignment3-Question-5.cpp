// Assignment3-Question-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include "funcs.h"

using namespace std;
int main()
{   //Declare map container to store pairs of the form (stateName, capitalName) of string data type.
    map<string, string> stateDataMap;

    //Add data to the map.
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";

    //Print data in map.
    print_map(stateDataMap);

    cout << "\nChanging capital of California to Los Angeles \n\n";
    stateDataMap["California"] = "Los Angeles";

    print_map(stateDataMap);

    //Get user input to select capital by state
    get_state(stateDataMap);
}

