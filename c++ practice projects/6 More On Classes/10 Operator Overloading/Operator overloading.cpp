// Operators that can't be overloaded include :: | .* | . | ?:

#include <iostream>

using namespace std;


class myclass
{
	public:
	
	int var;
	
	myclass()
	{}
	
	myclass(int a)
	
	:var(a)
	{}
	
	myclass operator+(myclass &obj)
	{
		myclass res;
		
		res.var = this -> var + obj.var;
		
		return res; // New res assigned to the sum of member vars to this and parameter obj to the res var member variable.
					// Res is returned as result.
	}
};

int main()
{
	myclass obj1(12), obj2(55);
	
	myclass res = obj1 + obj2;
	
	cout << res.var;
	
	return 0;
}

//output 67