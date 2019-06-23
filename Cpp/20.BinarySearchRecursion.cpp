#include <iostream>
#include <algorithm>
using namespace std;

int binary(int a[], int l, int r, int n){
	int mid = (l+r)/2;
	if(l>r) return 0;	
	if(a[mid]== n) return mid;
	else if (a[mid]<n)return binary(a, mid+1, r,n );
	else return binary(a, l, mid-1,n );
	
}

int main(){
	int a[10];// = {1,4,3,12,32,15,65,20,2,96};
	for(int i=0; i<10;++i) cin >> a[i];
	
	sort(a,a+10);
	int n;
	cout << "Enter a number: ";
	cin >> n;
	int r = binary(a, 0, 9, n);
	
	r? cout << "Number exist at index " << r+1 : cout << "Number does not exist!";
	
	return 0;
}
