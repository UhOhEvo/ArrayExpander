// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here
int *expandArray(int[], int);
void showArray(int[], int);

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here
const int SIZE = 5;

int main()
{

	// Local variable declarations placed here
	int numArray[SIZE] = { 10, 20, 30, 40, 50 };
	int* fancyNewArray;

	fancyNewArray = expandArray(numArray, SIZE);	// set expandArray return value, newArray, to fancyNewArray to be
													// able to be used in main
													
	// Inform user what program does


	// Prompt user to enter data needed by the program


	// A software algorithm would typically be executed after all data has been input
	cout << "The contents of the original array are:\n";
	showArray(numArray, SIZE);						// calls showArray to print with global size declarator
	cout << endl;

	expandArray(numArray, SIZE);					// expands array, adds elements

	cout << "The contents of the exapnded array are:\n";
	showArray(fancyNewArray, SIZE * 2);				// calls showArray again but passes it the value of fancyNewArray which
	cout << endl;									// is newArray pointer from expandArray.

	delete fancyNewArray;

	// Program output done at end of program


	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}

int* expandArray(int numArray[], int SIZE)
{
	int i = 0;

	int* newArray = new int[SIZE * 2];	// declare new array pointer

	for (; i < SIZE; i++)
	{
		newArray[i] = numArray[i];	// copy array elements from numArray
	}
	
	for (; i < SIZE * 2; i++)
	{
		newArray[i] = 0;			// continuing to use i as a counter (its at 5) intialize the rest of the
	}								// array with zeroes
	
	return newArray;
}

void showArray(int arr[], int size)
{
	for (int j = 0; j < size; j++)
	{
		cout << arr[j] << " ";		// prints whatever array is passed to it along with the size variable
	}
}


// PROOF
// Program output copied into the below comment section
/*
The contents of the original array are:
10 20 30 40 50
The contents of the exapnded array are:
10 20 30 40 50 0 0 0 0 0
Press any key to continue . . .
*/