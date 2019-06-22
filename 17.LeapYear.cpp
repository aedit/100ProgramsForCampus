#include <iostream>
using namespace std;

int main(){
	int a;
	cout << "Enter a year: ";
	cin >> a;
	
	if(a%4==0) cout << "Leap Year!";
	else cout << "Not a Leap Year!";
	
	return 0;
}
