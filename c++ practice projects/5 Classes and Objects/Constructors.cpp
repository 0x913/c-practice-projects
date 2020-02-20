/*

Constructors are a special member of a class.

They are executed whenever there is a new object

that is beeing created in the class.

The constructors name is identical to that of the class.

Constructors have no return type, not even void.

*/

#include <iostream>

using namespace std;

class myclass
{
	public:
	
	myclass (string nm)
	{
		setName(nm);
	}
	
	void setName(string x)
	{
		name = x;
	}
	
	string getName()
	{
		return name;
	}
	
	private:
	
	string name;
};

int main()
{
	myclass ob1("David");
	
	myclass ob1("Amy");
	
	cout << ob1.getName();
	
	return 0;
}

// ouput = "David"