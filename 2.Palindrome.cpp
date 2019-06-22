#include <iostream>
using namespace std;

int main(){
	string n;
	cout << "Enter a string: ";
	cin >> n;
	bool pal = true;
	int r = n.length();
	
	for(int i=0; i<=r/2; ++i) {
		if (n[i]!=n[r-i-1]) {
			pal = false;
			break;
		}
	}
	if(pal) cout << "Palindrome!";
	else cout << "Not Palindrome!";
	return 0;
}
