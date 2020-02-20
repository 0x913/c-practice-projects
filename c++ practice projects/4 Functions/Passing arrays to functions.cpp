#include <iostrream>

using namespace std;

void printArr ( int arr[], int size)
{
	for (int x = 0; x < size; x++)
	{
		cout << arr[x] << endl;
	}
}

int main()
{
	int myArr[3] = {42,33,88};
	
	printArr{myArr,3}; //prints it self
	
	return 0;
}

// Remember to specify the arrays name without [] when passing the argument to a funct.