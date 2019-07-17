#include <iostream>
using namespace std;

int main(){
	string n;
	cout << "Enter a string: ";
	cin >> n;
	int r = n.length();
	
	for(int i=r; i>=0; i--) cout << n[i];
	return 0;
}
