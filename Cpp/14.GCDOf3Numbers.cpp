#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cout << "Enter 3 numbers: ";
	cin >> a>> b>>c;
	int n = (a<b && a<c) ? a : b<c ? b : c;
	
	int gcd = 1;
	for(int i= 1; i<=n; ++i) if(a%i ==0 && b%i==0 && c%i==0) gcd = i;
	
	cout << gcd; 
	
	return 0;
}
