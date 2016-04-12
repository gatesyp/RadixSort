#include <iostream>
#include <cassert>


#include "Complexity_Timer.hpp"
#include "Complexity_Recorder.hpp"
#include "geeks.cpp"
#include "bubbleSort.cpp"
#include "listRadix.hpp"
#include "emersonMain.cpp"

void listRadixSort();
int main()
{
	listRadixSort();
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


void listRadixSort()
{
	int a[100],n,i,m;
	char temp;
	printf("===========================RADIX SORT===========================================\n");
	printf("ENTER NUMBER OF NUMBERS AND MAX NUMBER OF DIGITS\n");
	scanf("%d%d",&n,&m);
	printf("ENTER ELEMENTS\n");
	for(i=0;
			i< n;
			++i) scanf("%d",&a[i]);
	listsRadix(a,n,m);
	printf("SORTED LISTn");
	for(i=0;
			i< n;
			++i) printf("%d ",a[i]);
}
