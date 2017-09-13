/*
 * Galbraith P5
 * Alex Young
 * Palindrome
 * A program that reads in characters and checks if they are a palindrome
 * 9/13/2017
 */
#include <iostream>
#include <string.h>

using namespace std;

// remember to use null terminating character '/0'
int main()
{
	char str[81];
	char str2[81];
	cin.get(str, 81);
	cin.get();
	cout << str << endl;

	for (int i = 0; i < 81; i++) {
		if (str[i] != '/0') {
			// str2[count] = str[i]
			// count++;
		}
	}

	// if the 2 string are not equal
	// if (strcmp(str, str2) == 0) {


	// if (strcpy(str, str2) == 0)

	return 0;
}
