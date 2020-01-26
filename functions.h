#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

typedef struct occurrences {
	int num_occerrences;
	double frequency;
} Occurrences;

/*
Function: my_str_n_cat;
Description: A recreation of a function from the string.h library
	that concatinates two strings by n characters;
	@param *dest		string to add to;
	@param *src			string to add from;
	@param n			amount to add;
	@return				pointer to new string;
*/
char* my_str_n_cat(char* dest, char* src, int n);

/*
Function: binary_search;
Description: An implementation of a popular search algorithm.
	Uses midpoints of brackets to search for a number in a list;
	@param list[]		sorted list to search from;
	@param size			The size of the list;
	@param target		The integer to search for;
	@return				-1 if not found else the index of the founded target;
*/
int binary_search(int list[], int size, int target);

/*
Function: bubble_sort;
Description: A popular sorting algorithm that sorts a list of strings in order;
	@param *strings[]	The list of strings to sort;
	@param amount		The amount of strings in the list;
	@return				void;
*/
void bubble_sort(char* strings[], int amount);

/*
Function: is_palidrome;
Description: Checks if the inputed string is a palindrome where
	the string is the same read forward or backwards. i.e. ("racecar");
	@param *string		The string to check;
	@param len			The length of the string;
	@return				True or False;
*/
int is_palindrome(char* string, int len);

/*
Function: sum_primes;
Description: Takes in a number and calculates the total amount
	of all prime numbers leading up to the inputed number;
	@param n			unsigned number to calculate up to;
	@return				The total of primes up to n;
*/
int sum_primes(unsigned int n);

/*
Function: maximum_occurrences;
Description: iterates though a given string and calculates the
	number of occurrences of each character. Then outputs the max and the
	corresponding character of the max;
	@param *string		The string to iterate through;
	@param *occur[]		The list of occurrences data for each character;
	@param *max			The number of the highest occurrences;
	@param *max_char	The character with the highest occurrences;
	@return				void;
*/
void maximum_occurrences(char* string, Occurrences* occur[], int* max, char* max_char);

/*
Function: max_consecutive_integers;
Description: Iterates through a two dimensional array and detects
	the maximum number of consecutive integers and returns the starting
	address and the length of the consecutive integers;
	@param num[][5]		The list of ints to go through;
	@param rows			Number of rows;
	@param cols			Number of cols;
	@param **start		Pointer to the address of the starting address;
	@param *len			Output to the length of consecutive integers;
	@return				void;
*/
void max_consecutive_integers(int nums[][5], int rows, int cols, int** start, int* len);