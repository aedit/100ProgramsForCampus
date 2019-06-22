#include <iostream>
using namespace std;

int main(){
	int a, b;
	cout << "Enter 2 numbers: ";
	cin >> a>> b; 
	cout << "A : " << a << " B : " << b << endl;
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	cout << "A : " << a << " B : " << b;
	
	return 0;
}
