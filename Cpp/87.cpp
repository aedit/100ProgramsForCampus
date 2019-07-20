#include <iostream>
using namespace std;

int main(){
	int a[100] = {4,56,7,46,45,190,2,136,445,-5};
	
	int n;
	cout << "Position: ";
	cin >>n ;
	for(int i=9; i>=n-1; i--){
		a[i+1] = a[i];
	}
	cout << "Enter Number: ";
	cin >> a[n-1];
	
	cout << "Array:\n[";
	for(int i=0; i<10;++i) cout << a[i] << ", ";
	
	cout << a[10] << "]"; 
}
