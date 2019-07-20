#include <iostream>
using namespace std;

int main(){
	int a, sum=0;
	cout << "Enter number: ";
	cin >> a ;
	
	for(int i=1; i<=a/2;++i){
		if(a%i==0) sum+= i;
		
	}
	
	if(sum==a) cout << "Perfect Number!";
	else cout << "Not a perfect number!";
}
