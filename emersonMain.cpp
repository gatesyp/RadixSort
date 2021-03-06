#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "emersonRadix.cpp"

using namespace std;

int main() {
	const int SIZE = 100;
	int array[SIZE];
		
	//Fill up array with random numbers between 0 and 100 to sort. 
	for(int i = 0; i < SIZE; i++) {
		array[i]= rand() % SIZE;
	}
	
	//Call radix sort function called emersonSort
	emersonSort(array, SIZE);
	cout << endl;
	for(int i = 0; i < SIZE; i++)
		cout << array[i] << " ";
	cout << endl;
}
