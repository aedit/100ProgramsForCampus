#include <iostream>
using namespace std;

void swap(int a, int b){
	int c= a;
	a = b;
	b = c;
	
	cout << "A: " << a << " B: " << b;
}

int main(){
	int a,b;
	cout << "Enter number A: ";
	cin >> a;
	cout << "Enter number B: ";
	cin >> b;
	
	cout << "A: "<<a<< " B: "<<b << endl;
	swap(a,b);
	return 0;
}
