#include <iostream>

using namespace std;

/* FIRST EXAMPLE

int sum (int a, int b = 44)
{
	int result = a+b;
	
	return (result);
}


int main()
{
	int x = 24;
	
	int y = 36;
	
	// calling the func with both parameters
	
	int result = sum (x,y);
	
	cout << result << endl;
	
	// Outputs 60
	
	// calling the function without b
	
	result = sum (x);
	
	cout << result << endl;
	
	return 0;
}

*/

int volume(int l =1, int w=1, int h =1)
{
	return l*w*h
}

int main()
{
	cout << volume() << endl;
	
	cout << volume(5) << endl;
	
	cout << volume(2, 3) << endl;
	
	cout << volume(3, 7, 6) << endl;
	
	return 0;
}