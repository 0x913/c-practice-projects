#include <iostream>

using namespace std;

int main(){
	
	int glassofwater = 6
	
		switch (glassofwater){
			
			case 18:
			
			cout << "you drink too much water";
			
			break;
			
			case 3:
			
			cout << "you drink not enough water";
			
			break;
			
			case 6:
			
			cout << "you drink the perfect amount of water" << endl; // because there is no break it will run until it encounters a brake
			
			default:
			
			cout << "this is the default case";
		}
	
	return 0;
}

// Outputs "This is the default case"