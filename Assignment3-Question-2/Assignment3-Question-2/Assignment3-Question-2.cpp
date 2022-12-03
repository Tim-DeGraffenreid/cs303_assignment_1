// Assignment3-Question-2.cpp : Tim DeGraffenreid

#include <iostream>
#include <vector>
#include "palindrome.h"
using namespace std;

int main()
{
	vector<string> words{ "saippuakivikauppias" , "recursion" , "wow" , "a" , "umkc" , "" };
	
	for (size_t i = 0; i < words.size(); i++) {
		if (is_a_palindrome(words.at(i))) {
			cout << "'" << words.at(i) << "' is a palindrome." << endl;
		}
		else {
			cout << "'" << words.at(i) << "' is not a palindrome." << endl;
		}
	}
	return 0;
}



