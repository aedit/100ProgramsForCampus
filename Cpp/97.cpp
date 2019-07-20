#include <iostream>
using namespace std;

int printnum(int n){
	if(n==1) return 1;
	cout << printnum(n-1) << " ";
	return n;
}

int main(){
	int n = 100;
	
	cout << printnum(n);
	
	
	return 0;
}
