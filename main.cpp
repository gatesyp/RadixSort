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
	vector<recorder<timer> > stats(10);
	vector<recorder<timer> > stats2(10);
	vector<recorder<timer> > stats3(10);

	for(int i = 0; i < 4; ++i) {
		stats[i].reset();
		stats2[i].reset();
		stats3[i].reset();
	}
	
	//outer for loop to change the size for each iteration
	int counter = 0;
	for(int SIZE = 1000; SIZE < 100000; SIZE *= 10) {
		int array[SIZE];
		
		cout << SIZE << endl;
		
		//EMERSON RADIX SORT
		for(int i = 0; i< SIZE; i++) {
			array[i] = rand() % SIZE;
		}
	
		timer1.restart();
		emersonSort(array, SIZE);
		timer1.stop();

		stats[counter].record(timer1);
		


		//GEEK RADIX SORT
		radixGeeks<int> geeks;
		
		// initalize the vector with random values
		for(int i = 0; i < SIZE; i++)
			geeks.add(rand() % SIZE);
		
		timer1.restart();
		geeks.radixsort();
		timer1.stop();

		stats2[counter].record(timer1);



		
		bubbleySort<int> bubbles;

		for(int i = 0; i < SIZE; i++)
			bubbles.add(rand() % SIZE);

		timer1.restart();
		bubbles.bubblesort();
		timer1.stop();

		stats3[counter].record(timer1);

		counter++;
	}

	cout << endl << endl << "MIDWAY BETWEEN FOR LOOPS" << endl << endl;

		
	
//	for(int i = 0; i < counter; i++) {
//		stats[i].report(cout);
//		stats2[i].report(cout);
//		stats3[i].report(cout);
//		
//		cout << endl;
//	}

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
