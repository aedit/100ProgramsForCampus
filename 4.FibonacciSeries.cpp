#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter a number to print fibonacci number upto: ";
	cin >> n;
	int a=0, b=1, c=1;
	
	for(int i=0; i<n; ++i){
		cout << a << " ";
		c = a;
		a = b+a;
		b = c;
	}
	
	return 0;
}
