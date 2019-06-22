#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;
	bool prime= true;
	
	for(int i = 2; i <= sqrt(n);++i) if(n%i == 0) {
		prime = false;
		break;
		
	}
	
	if(prime) cout << "Prime";
	else cout << "Not Prime";
	return 0;
}
