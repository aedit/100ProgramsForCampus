#include <iostream>
using namespace std;

string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

string printdigitstowords(int n){
	
	if(!n) 
	  	return "";
	cout << printdigitstowords(n/10) << " ";
	
	return a[n%10];
	
}
int main(){
	int n;
	cout << "Enter Number: \n";
	cin >> n;
	
	cout << printdigitstowords(n);
	
	return 0;
}
