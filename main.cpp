#include <iostream>
#include <cassert>
#include "Complexity_Timer.hpp"
#include "Complexity_Recorder.hpp"
#include "geeks.cpp"
#include "bubbleSort.cpp"
#include "listRadix.hpp"
#include "emersonRadix.cpp"

//initialize the timer
timer timer1;


//void listRadixSort();

int main()
{
	vector<recorder<timer> > stats(5);

	for(int i = 0; i < 4; ++i)
		stats[i].reset();
	
	//outer for loop to change the size for each iteration
	int counter = 0;
	for(int SIZE = 1000; SIZE < 10000000; SIZE *= 10) {
		int array[SIZE];
		
		cout << SIZE << endl;
		
		//initalize array for emersonRadix
		for(int i = 0; i< SIZE; i++) {
			array[i] = rand() % 100;
		}
		cout << "Printing" << endl;
	
		timer1.restart();
		cout << "before sorting" << endl;
		emersonSort(array, SIZE);
		cout << "after sorting" <<endl;
		timer1.stop();

		stats[counter].record(timer1);

		counter++;
		cout << "After counter increase" << endl << endl;
	}

	cout << endl << endl << "MIDWAY BETWEEN FOR LOOPS" << endl << endl;


//		stats[counter].record(timer1);
//		
//		listRadixSort();
//		// create the object
//		radixGeeks<int> geeks;
//		// now perform all test logic
//		for(int i = 100; i < 400; i++)
//			geeks.add(i);
//		for(int i = 10; i < 40; i++)
//			geeks.add(i);
//		// command to perform the sort
//		geeks.radixsort();
//		// optionally print the vector
//		//	geeks.print();
//		bubbleySort<int> bubbles;
//		for(int i = 10; i < 20; i++)
//			bubbles.add(i);
//		for(int i = 0; i < 20; i++)
//			bubbles.add(i);
//		bubbles.print();
//		bubbles.bubblesort();
//		bubbles.print();
	
	for(int i = 0; i < counter; i++) {
		stats[i].report(cout);
		cout << endl;
	}

	cout << endl;

	return 0;
}


//void listRadixSort()
//{
//	int a[100],n,i,m;
//	char temp;
//	printf("===========================RADIX SORT===========================================\n");
//	printf("ENTER NUMBER OF NUMBERS AND MAX NUMBER OF DIGITS\n");
//	scanf("%d%d",&n,&m);
//	printf("ENTER ELEMENTS\n");
//	for(i=0;
//			i< n;
//			++i) scanf("%d",&a[i]);
//	listsRadix(a,n,m);
//	printf("SORTED LISTn");
//	for(i=0;
//			i< n;
//			++i) printf("%d ",a[i]);
//}
