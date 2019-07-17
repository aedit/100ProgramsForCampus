//Incomplete

#include <iostream>
using namespace std;

void sub(string a){
	cout << "Enter posiiton to enter: ";
	int n,k;
	cin >> n;
	cout << "Enter String to insert: ";
	string b; 
	cin >> b;
	char c[a.length()+b.length()];
	for(int i=0; i< n; ++i){
		c[i] = a[i];
		cout << c[i];
	}
	for(int i=0; i< b.length(); ++i){
		c[a.length()+i] = a[i+n];
		cout << a.length()+i << c[a.length()+i] <<endl << "b\n";
		c[i+n] = b[i];
	}
	cout << endl << endl;
	cout << c;
}

void del(string a){
	
}

void replace(string a){
	
}

int main(){
	int ch; string a;
	cout << "Enter a string: ";
	cin >> a;
	cout << "1. Substring Insertion:\n2. Delete n characters:\n3. Replace Character:\n";
	cin >> ch;
	switch(ch){
		case 1: sub(a); break;
		case 2: del(a); break;
		case 3: replace(a); break;
	} 
	
	return 0;
}
