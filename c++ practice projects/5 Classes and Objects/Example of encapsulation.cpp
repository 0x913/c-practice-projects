// Access specifiers are public, protected and private.

// public member is my be used to acess private members.

// private member can not be acessed from outside the class only from within.

#include <iostream>

#include <string>

using namespace std;

class myclass
{
	public:
	
	void setName(string x)
	{
		name = x;
	}
	
	string getName()
	{
		return name; // getName method returns private name attribute
	}
	
	private:
	
	string name;
};

int main()
{
	myclass myObj;
	myObj.setName ("john");
	cout << myObj.getName(); // Outputs John
	
	return 0;
}