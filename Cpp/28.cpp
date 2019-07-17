#include <iostream>
using namespace std;

void pascal(int n){
	int cal =1;
	for(int i=0; i<n; ++i){
		for(int j=0; j<n-i; ++j) cout << " ";
		for(int k=0; k<=i; ++k) {
			
			if(k==0 || i ==0) cal =1;
			else cal = cal*(i-k+1)/k;
			cout << cal << " ";
		}
		cout << endl;
	}
}

int main(){
	int n;
	cout << "Enter lines to print: ";
	cin >> n;
	
	pascal(n);
	return 0;
}
