#include <iostream>

using namespace std;

int main(){
	
	int *p = new int; //request memory
	
	*p = 5; // store value
	
	cout << *p << endl; // cout the value
	
	delete p; // free up memory
	
	// p is now a dnagling pointer
	
	p = new int; // reuse for new address
	
	*p = 10;
	
	cout << *p << endl;
	
	delete *p;
	
	//dynamic mememory allocated for arrays example:
	
	int *p = NULL; // pointer initialized with 0
	
	p = new int[20]; // Request memory for array
	
	delte [] p; // delete array that was pointed to by pointer p
	
	return 0;
	
}

/*

Dont forget to free up memor, because else you will have memory leaks until
the programm shuts down.

*/