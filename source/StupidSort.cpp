////////////////////////////
//Implements a stupid version
// of Bubble Sort that doesn't
// terminate early upon the
// list reaching a sorted state
//
//Author: Matthew Bell and CS273-1
// FA'22
////////////////////////////

#include <iostream>

////////////////////////////////
//Behold: the stupid version of bubblesort!
//Parameters: An array named A, passed as a pointer
//	An integer named size that gives the size of A.
//Precondition: size must actually be the size of A!
//	Also, A must point to an array of integers.
//Returns: Nothing.
//Postcondition: A is now in sorted order.
////////////////////////////////
void bibble(int* A, int size);

//////////////////////////////////
//A swap function for integers.
//Parameters: Two integers, passed by reference
//Preconditions: Nothing worth writing home about....
//Returns: Nada!
//Postconditions: the integers passed in have
//	been swapped!
/////////////////////////////////
void swap(int& x, int& y);

int main() {
	int A[] = { 5, 4, 3, 2, 1 }; //Create an array in reverse order for the sake of demonstration
	bibble(A, 5); // Call the sort function!

	//The loop below demonstrates it is now sorted!
	for (int i = 0; i < 5; ++i)
		std::cout << A[i] << std::endl;

	return 0;
}

/*
////////////////////////////////
//Behold: the stupid version of bubblesort!
//Parameters: An array named A, passed as a pointer
//	An integer named size that gives the size of A.
//Precondition: size must actually be the size of A!
//	Also, A must point to an array of integers.
//Returns: Nothing.
//Postcondition: A is now in sorted order.
////////////////////////////////
Pseudocode
StupidBubbleSort:
     for i:=0 to size of the array
	      for j:= 1 til the last spot where something bubbled up correctly
		       if Array[j] < A[j-1] then swap them;
*/
void bibble(int* A, int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = 1; j < size - i; ++j) {
			if (A[j] < A[j - 1]) {
				swap(A[j], A[j - 1]);
			}
		}
	}
}

//////////////////////////////////
//A swap function for integers.
//Parameters: Two integers, passed by reference
//Preconditions: Nothing worth writing home about....
//Returns: Nada!
//Postconditions: the integers passed in have
//	been swapped!
/////////////////////////////////
void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

