#include <iostream>

using namespace std;

int main){
	
	x = 5;
	
	a = 3;
	
	y = ++x; // prefix example
	
	b = a++; // postfix example
	
	cout << y; // x is 6, y is 6 (prefix)
	
	cout << a; // a is 6, y is 5 (postfix)
	
	return 0;
	
}

// you can also prefix and postfix -- instead of ++