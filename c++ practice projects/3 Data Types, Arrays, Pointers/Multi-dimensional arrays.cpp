#include <iostream>

using namespace std;

int main{
	
	int x[3][4]{
		
		{1,2,3} // 1st row
		
		{4,5,6} // 2nd row
	};
	
	cout << x[0][1] << endl; // 0 refers to row 1, 1 refers to the second element 2
	
	return 0;
}