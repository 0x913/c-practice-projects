#include <iostream>

using namespace std;

/*	PASSING BY VALUE
void myfunc(int x)
{
	x = 100;
}

int main()
{
	int var = 20;
	
	myfunc(var);
	
	cout << var;
	
	return 0;
}
*/

// PASSING BY REFERENCE can modify the actual var passed

void myfunc (int *x)
{
	*x = 100;
}

int main()
{
	int var = 20;
	
	myfunc(%var);
	
	cout << var;
	
	return 0;
}