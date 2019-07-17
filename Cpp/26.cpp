#include <iostream>
using namespace std;

int main(){
	int a[10] = {1,4,3,12,32,15,65,20,2,96};
	//for(int i=0; i<10;++i) cin >> a[i];
	
	int max= a[0], min=a[0];
	
	for(int i=0; i<10; ++i){
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	
	cout << "Maximum: " << max << " Minimum: " << min;
	return 0;
}
