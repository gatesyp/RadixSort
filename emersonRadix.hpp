#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void emersonSort(int array[]);
void countingSort(int array[], int digit);
void print(int array[]); 

//Function that implements Radix Sort. Sets initial values and calls
//couting sort function that does most of the computational work
void emersonSort(int array[]) {

	//initialize values and find the maximum value of the ipnut array
	//to know how many decimal places to sort
	int size = 100; 
	int max = array[0];
	for(int i = 0; i < size; i++){
		if(max < array[i])
			max = array[i];
	}
	
	//Do the work of sorting on each digit
	//First the one's place
	//Then two's place
	//Then three's place and so on until the maximum digit is reached
	for(int digit = 1; max/digit > 0; digit = digit * 10){
		countingSort(array, digit);	
	}
}


void countingSort(int array[], int digit) {
	
	int size = 100;

	//initalize an array to store the counts of each number in the input array
	int count[10] = {0};
	int output[size] = {0};

	//fill the count array with the number of each element in input array 
	int temp = 0;
	for(int i = 0; i < 100; i++) {
		temp = (array[i]/digit) % 10;
		count[temp]++;
	}

	//modify the count array so that the value correspond to indecies and 
	//not simply counts. This allows the values to be inserted in the final
	//sorting step
	for(int i = 1; i < 10; i++) {
		count[i] += count[i-1];
	}

	//Inert input records into their corresponding bins
	int loc = 0;
	for(int i = size-1; i >= 0; i--) {
		loc = count[(array[i]/digit) % 10];
		output[loc] = array[i];
		count[(array[i]/digit) % 10]--;
	}

	//Reset the array given to the sorted values from the output
	for(int i = 0; i < size; i++) {
		array[i] = output[i];
	}

}

//Helper function to print an array
void print(int array[]) {

	cout << endl;

	for(int i = 0; i < 100; i++) {
		cout << array[i] << "  ";
	}
	
	cout << endl;
}



