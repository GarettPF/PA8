/*
	Author: Garett Pascual-Folster
	Date: 11/19/2019
	Description: Programming Assignment 8
				Contains bunch of random problems
				that test the authors coding abilities
*/

#include "functions.h"

int main(void) {

	// my_str_n_cat()
	char dest[50] = "Hello";
	char src[50] = " World!";
	my_str_n_cat(dest, src, 5);
	printf("my_str_n_cat(\"Hello\", \" World!\", 5):\n%s\n\n\n", dest);


	// binary_search()
	int sorted_list[10] = {
		0, 2, 3, 5, 7, 8, 10, 12, 13, 15 },
		target = 12;
	printf("binary_search(10):\n%d\n\n", binary_search(sorted_list, 10, target));


	// bubble_sort()
	char str1[] = "hello world!";
	char str2[] = "c is the best language";
	char str3[] = "Just 2 more weeks";
	char str4[] = "You got this!";
	char str5[] = "This is my life now .-.";
	char str6[] = "Coding is fun they said";
	//for demonstration purposes
	char* strings[6] = { str1, str2, str3, str4, str5, str6 };
	bubble_sort(strings, 6);
	printf("bubble_sort():\n");
	for (int i = 0; i < 6; i++) { printf("%s\n", strings[i]); }
	printf("\n\n");


	// is_palindrome()
	char* string = "race car";
	int success = is_palindrome(string, 8);
	printf("is_palindrome(\"race car\"): %d\n\n", success);


	// sum_primes()
	int num = 1234,
		sum = sum_primes(num);
	printf("sum_primes(1234): %d\n\n", sum);


	// maximum_occurrences()
	char* test = "test string", max_char = '\0';
	Occurrences characters[128] = { {0, 0.0} }; // one for each ascii code
	int max = 0;
	maximum_occurrences(test, characters, &max, &max_char);
	puts("maximum_occurrences(\"test string\")");
	printf("max: %d\ncharacter: %c\n\n", max, max_char);


	// max_consecutive_integers()
	int nums[4][5] = {
		{-5, 6, 0, 2, 2},
		{2, 2, 2, 9, 3},
		{3, 3, 2, 1, -8},
		{7, -2, 6, 0, 4} },
		*start = NULL, length = 0;
	max_consecutive_integers(nums, 4, 5, &start, &length);
	puts("max_consecutive_integers():");
	printf("Start Address: %d\nStart Number: %d\nLength: %d\n\n",
		start, *start, length);

	return 0;
}