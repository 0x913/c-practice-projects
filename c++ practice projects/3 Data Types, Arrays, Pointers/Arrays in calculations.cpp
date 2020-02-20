#include <iostream>

using namespace std;

int main(){
	
	int arr[] = {1,2,3,4,5,6};
	
	int sum = 0;
	
	
	for (int x = 0; x < 5; x++){
		
		sum += arr[x];
		
	}
	
	cout << sum << endl; // outputs 21
	
	return 0;
}