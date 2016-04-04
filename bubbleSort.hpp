#ifndef BUBBLESORT_HPP
#define BUBBLESORT_HPP

#include <iostream>
#include <vector>


// simple struct to perform bubble sort
// fully functioning
template<typename T>
struct bubbleySort{
	std::vector<T> arr;
	int n;

	void add(int x)
	{
		arr.push_back(x);
		++n;
	}

	void bubblesort() {
		n = arr.size();
		bool swapped = true;
		int j = 0;
		int tmp;
		while (swapped) {
			swapped = false;
			j++;
			for (int i = 0; i < n - j; i++) {
				if (arr[i] > arr[i + 1]) {
					tmp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = tmp;
					swapped = true;
				}
			}
		}
	}
	void print()
	{
		n = arr.size();
		int i = 0;
		while(i < n)
		{
			std::cout << arr[i];
			++i;
		}
	}
};

#endif
