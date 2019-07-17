#include <iostream>
using namespace std;

int main(){
	int a[10];// = {1,4,3,12,32,15,65,20,2,96};
	for(int i=0; i<10;++i) cin >> a[i];
	
	int n;
	bool exist= false;
	cout << "Enter a number: ";
	cin >> n;
	
	for(int i=0; i<10; ++i){
		if(a[i] == n ) {
		
		cout << "Number Exist at position " << i+1; exist= true;break;
		}
	}
	if(!exist) cout << "Number Does not Exist";
	return 0;
}
