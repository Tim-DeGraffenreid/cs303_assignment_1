#include "funcs.h"

void print_map(std::map<std::string, std::string>& the_map) {
    // Prints the state and capital stored in the map.
    std::for_each(the_map.begin(), the_map.end(), [](const std::pair<std::string, std::string>& data) {
        std::cout << "State: " << data.first << ", Capitol: " << data.second << std::endl;
     });

}

void get_state(std::map<std::string, std::string>& the_map)
{   //Get user input to select which capital to output by state.
    std::string stateName = "";
    std::cout << "\nEnter state to output capital ('Nebraska', 'New York', 'Ohio', 'California', 'Massachusetts', 'Texas'):" << std::endl;
    std::getline(std::cin, stateName);
    std::cout << "The capital of " << stateName << " is " << the_map[stateName] << std::endl;
}
