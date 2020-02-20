#include <iostream>

using namespace std;

int main(){
	
	int myArr[6];
	
	for (int x=0; x < 6; x++){
		
		myArr[x] = 44;
		
		cout << x << ":" << myArr[x] << endl;
		
	}
	
	return 0;
}

/* Outputs :

0: 44
1: 44
2: 44
3: 44
4: 44
5: 44

*/