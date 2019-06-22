#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[10];// = {1,4,3,12,32,15,65,20,2,96};
	for(int i=0; i<10;++i) cin >> a[i];
	
	sort(a,a+10);
	int n;
	bool exist= false;
	cout << "Enter a number: ";
	cin >> n;
	int l =0, r = 10-1, mid;
	
	while(l<=r){
		mid= (l+r)/2;
		if(a[mid]==n){
			exist =true;
			cout << "Number exist at index " << mid+1;
			break;
		}
		else if(n>a[mid]) {
			l=mid +1;
		}
		else r=mid-1;
	} 
	
	if(!exist) cout << "Number Does not Exist";
	return 0;
}
