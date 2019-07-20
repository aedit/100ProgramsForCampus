#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int n;
	cout << "Lines to print: ";
	cin >> n; 
	
	for(int i=0; i<n; ++i){
		for(int j=0; j < i; j++)
			cout << (i+j) << " ";
		cout << endl;
	}
}
