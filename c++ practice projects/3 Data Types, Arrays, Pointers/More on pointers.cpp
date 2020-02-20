/*

There are two operators for pointers:

Address-of operator (&): returns the memory address of its operand.

Contents-of (or dereference) operator (*): returns the value of the variable located at the address specified by its operand.

*/

#include <iostream>

using namespace std;

int main(){
	
	int ans = 355;
	
	int *p:
	
	p = &ans;
	
	cout << ans << endl; // output 355 (val of ans)
	
	cout << p << endl; // output (asm memory location)
	
	cout << *p << endl; // output 355 (the value of my var stored in pointer)
	
	return 0;
}