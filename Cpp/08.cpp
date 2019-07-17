#include <iostream>
using namespace std;

int main(){
	int n1, n2;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	
	int gcd = 1;
	
	int n = n1> n2 ? n2 : n1;
	
	for(int i = 1; i<=n ; ++i){
		if(n1%i==0 && n2%i==0) gcd = i;
	}
	
	cout << gcd;
	return 0;
}
