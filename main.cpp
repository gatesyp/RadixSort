#include <iostream>
#include <cassert>


#include "Complexity_Timer.hpp"
#include "Complexity_Recorder.hpp"
#include "geeks.cpp"

int main()
{
	int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
	int n = sizeof(arr)/sizeof(arr[0]);
	radixGeeks<int> geeks;
	radixsort(arr, n);
	print(arr, n);
	return 0;
}
