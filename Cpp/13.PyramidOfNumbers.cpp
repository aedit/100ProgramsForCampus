#include <iostream>
using namespace std;

void pattern1(){
	cout << "Enter Lines to print: ";
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=(n-i); ++j) cout << " ";
		for(int k=1; k<=i; ++k) cout << i << " ";
		cout << endl;
	}
}

void pattern2(){
	cout << "Enter Lines to print: ";
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i){
		int r =i;
		for(int j=1; j<=(n-i); ++j) cout << " ";
		for(int k=1; k<=i; ++k) cout << r++ << " ";
		cout << endl;
		
	}
}
void pattern3(){
	cout << "Enter Lines to print: ";
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=(n-i); ++j) cout << " ";
		for(int k=1; k<=i; ++k) cout << "*" << " ";
		cout << endl;
		
	}
}

int main(){
	int p;
	cout << "Enter pattern code to Print: ";
	cin >> p;
	switch(p){
		case 1: pattern1(); break;
		case 2: pattern2(); break;
		case 3: pattern3(); break;
	}
	return 0;
}
