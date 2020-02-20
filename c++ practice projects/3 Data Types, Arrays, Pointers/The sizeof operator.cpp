#include <iostream>

using namespace std;

int main(){
	
	cout << "int:" << sizeof(int) << endl;
	
	int var = 40;
	
	cout << "var:" << sizeof(var) << endl;
	
	cout << "char:" << sizeof(char) << endl;
	
	cout << "float:" << sizeof(float) << endl;
	
	cout << "double:" << sizeof(double) << endl;
	
	double myArr[10];
	
	cout << sizeof(myArr) << endl;
	
return 0;
}