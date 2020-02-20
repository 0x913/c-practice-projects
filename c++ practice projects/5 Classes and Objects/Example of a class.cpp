#include <iostream>

using namespace std;

class bankaccount
{
	public:
	
	void sayHi()
	{
		cout << "hi" << endl;
	}
	
};

int main()
{
	bankaccount test;
	
	test.sayHi();
	
	return 0;
}