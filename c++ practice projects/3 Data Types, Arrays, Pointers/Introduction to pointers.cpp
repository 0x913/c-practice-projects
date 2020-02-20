/* 

int *ip;  // pointer to an integer
double *dp;   // pointer to a double
float *fp;  // pointer to a float
char *ch;  // pointer to a character

*/

#include <iostream>

using namespace std;

int main(){
	
	int score = 5;
	
	int *scorePtr;
	
	scorePtr = &score;
	
	cout << scorePtr << endl;
	
	// Now, scorePtr's value is the memory location of score.
	
	return 0;
}