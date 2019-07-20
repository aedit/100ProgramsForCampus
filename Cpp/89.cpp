#include <iostream>
using namespace std;

int fact(int n){
	if(n==0) return 1;
	return n * fact(n-1);
}

int main(){
	int a, sum=0;
	cout << "Enter number: ";
	cin >> a ;
	int temp =a;
	
	while(temp){
		sum+= fact(temp%10);
		temp/=10;
	}
	
	if(sum==a) cout << "Strong Number!";
	else cout << "Not a strong Number!";
}
