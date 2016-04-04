#ifndef OURS_HPP
#define OURS_HPP

#include <iostream>
#include <vector>

using namespace std;

// TODO should we even write one from scratch? ask will if we have to, or if we can just use lots of existing implementations

template<typename T>
struct ourRadix
{
	vector<T> container; 
	int n, r, k;

	void add(int x)
	{
		container.push_back(x);
		++n;
	}
	// array based implementation here
	void radixsort()
	{

	}





};

#endif
