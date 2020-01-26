#include "functions.h"

char* my_str_n_cat(char* dest, char* src, int n) {
	int is_end = 0, index = 0;
	char* start = dest;

	// find \0 character of dest
	while (!is_end) {
		if (*dest == '\0') {
			is_end = 1;
		}
		else {
			dest++;
		}
	}

	// add src to end of dest
	is_end = 0;
	while (!is_end) {
		*dest = *src;
		dest++;
		src++;

		n--;
		if (*src == '\0' || !n) {
			is_end = 1;
		}
	}
	//*dest = '\0';

	return start;
}

int binary_search(int list[], int size, int target) {
	int left = 0, right = size, found = 0,
		targetindex = -1, midpoint;

	while (!found && left < right) {
		//set mid between left and right
		midpoint = (left + right) / 2;

		if (target == list[midpoint]) {
			found = 1;
			targetindex = midpoint;
		}

		if (list[midpoint] < target) {
			left = midpoint + 1;
		}

		if (list[midpoint] > target) {
			right = midpoint;
		}
	}

	return targetindex;
}

void bubble_sort(char* strings[], int amount) {
	int U = amount, C;
	char* str_ptr = NULL;

	while (U) {
		C = 1;
		while (C < U) {
			if (strcmp(strings[C - 1], strings[C]) > 0) {
				str_ptr = strings[C];
				strings[C] = strings[C - 1];
				strings[C - 1] = str_ptr;
			}
			C++;
		}
		U--;
	}
}

int is_palindrome(char* string, int len) {
	int result = 0;
	--len;

	// if left or right value is a whitespace
	while (*string == 32) {
		string++;
	}
	while (*(string + len) == 32) {
		len--;
	}
	
	// addresses are the same or have passed each other
	if (string >= string + len) {
		return 1; // stop the program
	}

	// if left and right are the same and continue
	if (*string == *(string + len)) {
		result = is_palindrome(string + 1, len - 1);
	}

	return result;
}

int sum_primes(unsigned int n) {
	int sum = 0, divisor = 2, prime = 0, flag = 1;

	if (n != 2) { 
		while (divisor <= n/2) { // check if n is prime
			if (n % divisor == 0) {
				flag = 0;
			}
			divisor += 1;
		}
		if (flag) { // n is prime
			sum = n;
		}

		sum += sum_primes(n - 1); // add to the call stack
	}
	else { // if n is 2
		sum = 2;
	}

	return sum;
}

void maximum_occurrences(char* string, Occurrences occur[], int* max, char* max_char) {
	int count = -1, index = 0;
	*max = 0;

	//count each char
	do {
		count++;
		index = *(string + count);
		occur[index].num_occerrences++;
	} while (index != 0);

	// calculate frequency for each char
	for (int i = 0; i < 128; i++) {
		occur[i].frequency = (double)occur[i].num_occerrences / count;
	}

	// get max and character
	for (int i = 0; i < 128; i++) {
		if (occur[i].num_occerrences > *max) {
			*max = occur[i].num_occerrences;
			*max_char = i;
		}
	}
}

void max_consecutive_integers(int nums[][5], int rows, int cols, int** start, int* len) {
	int count, *temp;
	*len = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			count = 0;
			temp = &nums[i][j];

			while (*temp == *(temp + count)) { // count consecutive ints
				count++;
			}

			if (count > * len) { // higher then prev max
				*len = count;
				*start = temp;
			}
		}
	}
}