#include <iostream>

using namespace std;

int fact (int n)
{
	if ( n==1 )
	{
		return 1;
	}
	else
	{
		return n * fact ( n-1 );
	}
}

int main()
{
	cout << fact(5); // basically the calculation is 5*4*3*2*1 which is 120
	
	return 0;
}