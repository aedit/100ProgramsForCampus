#include <iostream>
using namespace std;

int main(){
	long int n;
	cout << "Enter the number: ";
	cin >> n;
	int digits = 0;
	int temp= n;
	while(temp){
		temp/=10;
		digits++;
	}
	
	while(digits--){
		
		temp = temp*10 + n%10;
		n/=10;
	}
	cout << temp;
	
	return 0;
}
