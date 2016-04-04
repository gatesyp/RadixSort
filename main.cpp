#include <iostream>
#include <cassert>


#include "Complexity_Timer.hpp"
#include "Complexity_Recorder.hpp"
#include "geeks.cpp"
extern "C" { #include "listRadix.c" }

// template<typename T>
// void addElements(ourRadix<T>& myRadix, int num);


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
	geeks.print();
	return 0;
}


// void addElements(ourRadix<T>& myRadix, int num)
// {
// 	for(int i = 0; i < num; i++)
// 	{
// 		ourRadix.add(rdm);
// 	}	
// }
