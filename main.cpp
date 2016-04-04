#include <iostream>
#include <cassert>


#include "Complexity_Timer.hpp"
#include "Complexity_Recorder.hpp"
#include "geeks.cpp"
#include "bubbleSort.cpp"

// extern "C" { #include "listRadix.c" } // line to add a c file as a reference, throws error

int main()
{
	// create the object
	radixGeeks<int> geeks;
	// now perform all test logic
	for(int i = 100; i < 400; i++)
		geeks.add(i);
	for(int i = 10; i < 40; i++)
		geeks.add(i);
	// command to perform the sort
	geeks.radixsort();
	// optionally print the vector
//	geeks.print();
	bubbleySort<int> bubbles;
	for(int i = 10; i < 20; i++)
		bubbles.add(i);
	for(int i = 0; i < 20; i++)
		bubbles.add(i);
	bubbles.print();
	bubbles.bubblesort();
	bubbles.print();
	return 0;
}


