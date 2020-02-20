#include <iostream>

#include <cstdlib>

#include <ctime> // is a seed for truly random numbers in combination with the srand function.

using namespace std;

void some()
{
	cout << rand(); // rand() generates pseudo random numbers.
}

int main()
{
	srand(time(0)); // will return current second count -> sets a different seed for rand every time the program runs.
	
	for (int x = 1; x <= 10; x++)
	{
		cout << 1 + (rand()%6) << endl; // true random number from 1 through 6
	}
	
	return 0;
}