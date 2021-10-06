// Emerson Racca
// 10/4/2021
// Lab 6c - Max and Min in an Array
/*
Create a 20-element integer array named randomNumbers.

const int size = 20;
int randomNumbers[size];
1. Populate the array with random integers from 1 - 1000.
2. Write a function that returns the maximum integer in the array.

int maxInteger( int a[], int size );
3. Write a function that returns the minimum integer in an array.

int minInteger( int a[], int size );
4. Display the results in the main. That is, display all 20 random integers, the max and the min.

5. Ask the user if they would like to play again.

*/

#include<iostream>
#include<cstdlib> // srand(), rand()
#include<ctime> // time(0)
using namespace std;

int maxInteger(int a[], int size);
int minInteger(int a[], int size);

int main(void) {
	srand((unsigned int)time(0)); //rids unsigned int error.

	const int size = 20;
	int randomNumbers[size];

	char runAgain;

	cout << "Max and Min in an Array\n";
	cout << "This program finds the maximum and minimum element in an array.\n\n";

	do {
		for (int i = 0; i < size; i++) {
			randomNumbers[i] = 1 + rand() % 1000;
			cout << "Element\t" << i << "\t=\t" << randomNumbers[i] << endl; //I know this could have been displayed using another for loop.
		}

		cout << endl;
		cout << "The maximum integer in the array is:\t" << maxInteger(randomNumbers, size) << endl;
		cout << "The minimum integer in the array is:\t" << minInteger(randomNumbers, size) << endl;

		cout << "\nDo you want to run it again (y or n)? ";
		cin >> runAgain;
		cout << endl << endl;
	} while (runAgain == 'y');

	return 0;
}

int maxInteger(int a[], int size) {
	int maxInt = 1;
	for (int i = 0; i < size; i++) {
		if (a[i] > maxInt)
			maxInt = a[i];
	}
	return maxInt;
}

int minInteger(int a[], int size) {
	int minInt = 1000;
	for (int i = 0; i < size; i++) {
		if (a[i] < minInt)
			minInt = a[i];
	}
	return minInt;
}

