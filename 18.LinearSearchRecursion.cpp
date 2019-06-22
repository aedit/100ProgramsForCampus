#include <iostream>
using namespace std;

int linear(int a[],int l, int r, int n){
	if(l == r) return 0;
	if(a[l] == n) return l+1;
	
	linear(a, l+1,r,n);
}

int main(){
	int a[10];// = {1,4,3,12,32,15,65,20,2,96};
	for(int i=0; i<10;++i) cin >> a[i];
	
	int n;
	cout << "Enter a number: ";
	cin >> n;
	
	int r = linear(a,0, 10,n);
	r ?  cout << "Exist at position " << r : cout << "Does not Exist";
	
	return 0;
}
