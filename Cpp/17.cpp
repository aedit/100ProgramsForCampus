#include <iostream>
using namespace std;

int main(){
	int a;
	cout << "Enter a year: ";
	cin >> a;
	
	if(a%4!=0) cout << "Not a leap year!";
	else if(a%100 != 0) cout << "Leap year!";
	else if (a%400!=0)	cout << "Not a leap year!";
	else cout << "Leap Year!";
	return 0;
}
