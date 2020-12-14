// CPP program to calculate
// range of signed data type
#include <bits/stdc++.h>
#define SIZE(x) sizeof(x) * 8
using namespace std;

// function to calculate range of
//signed data type
void printSignedRange(int count)
{
	long int min = pow(2, count - 1);
	long int max = pow(2, count - 1) - 1;
	cout << min * (-1) << " to " << max << endl;
}

// DRIVER program
int main()
{
	cout << "signed char: ";
	printSignedRange(SIZE(char));
	cout << "\nsigned short int: ";
	printSignedRange(SIZE(short int));
	cout << "\nsigned int: ";
	printSignedRange(SIZE(int));
	cout << "\nsigned long int: ";
	printSignedRange(SIZE(long int));
	cout << "\n";

	return 0;
}

