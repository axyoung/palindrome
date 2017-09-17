/*
 * Galbraith P5
 * Alex Young
 * Palindrome
 * A program that reads in characters and checks if they are a palindrome
 * 9/17/2017
 */
#include <iostream>
#include <cstring> // for strlen and strcmp
#include <ctype.h> // this is for isspace and ispunt and tolower

using namespace std;

int main()
{
	char str[81] = "";
	char str2[81] = "";
	char temp[81] = "";
	cin.get(str, sizeof(str));
	cin.get();
	// this for loop checks for white space and punctuation
	// create a temp 2char array that holds the user array without punct or spaces
	// this will be the array to compare with
	for (int i = 0, j = 0; str[i] != '\0'; i++) {
		// uses 2 variables i and j to hold the seperate indexes
		// makes sure everything is lowercase and without spaces/puncts
		if (!isspace(str[i]) && !ispunct(str[i])) {
			temp[j++] = tolower(str[i]);
		}	
	}
	int size = strlen(temp);
	// str2 is formed by running in the temp backwards
	for (int i = 0; i < size; i++) {
		str2[i] = temp[size - i - 1];
	}

	// for debugging
	// cout << str << endl;
	// cout << temp << endl;
	// cout << str2 << endl;

	// if the 2 string are equal then it is a palindrome, else it is not
	if (strcmp(temp, str2) == 0) {
		cout << "Palindrome." << endl;
	}
	else {
		cout << "Not a palindrome." << endl;
	}
	return 0;
}
