#include <iostream>
/*
	Recursive function to determine if a word is a palindrome
	input: word(string), begin(integer), end(integer)
	output boolean
*/
bool is_a_palindrome(std::string word, int begin, int end)
{	/*
	If a word is one or zero characters it is a palindrome
	*/
	if ((begin == end) || (word.length() == 0)) {
		return true;
	}
	/*
	If the beginning of a word and the end are not equal it is not a palindrome
	*/
	if (!(word[begin] == word[end])) {
		return false;
	}
	/*
	If there are more than two characters make a recursive call to is_a_palindrome function
	*/
	if ((end - begin) > 2) {
		return is_a_palindrome(word, begin + 1, end - 1);
	}

	return true;
}
/*
	Wrapper function for recursive is_a_palindrome function
	input: word(string)
	output boolean
*/
bool is_a_palindrome(std::string word) {
	return is_a_palindrome(word, 0, word.length() - 1);
}