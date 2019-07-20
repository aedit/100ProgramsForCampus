#include <iostream>
using namespace std;


int main(){
	int n;
	cout << "Enter Decimal Number: \n";
	cin >> n;
	int a[10];
	int pos= 0;
	
	while(n){
		a[pos++] = n%8;
		n/=8;
		
	}
	
	for(int i=pos-1; i>=0; i--){
		cout << a[i];
	}
	
	return 0;
}
