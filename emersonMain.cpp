#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "theRadix.cpp"

using namespace std;

int main() {
	const int SIZE = 100;
	int array[SIZE];
		
	//Fill up array with random numbers between 0 and 100 to sort. 
	int temp;
	for(int i = 0; i < SIZE; i++) {
		array[i]= rand() %100;
	}
	
	//Call radix sort function called emersonSort
	emersonSort(array);
	cout << endl;
	for(int i = 0; i < SIZE; i++)
		cout << array[i] << " ";
}
