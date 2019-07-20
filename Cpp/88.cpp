#include <iostream>
using namespace std;

int main(){
	int a[10] = {4,56,7,46,45,190,2,136,445,-5};
	
	int max= a[0], min=a[0];
	
	for(int i=1; i<10; ++i){
		max = a[i] > max ? a[i] : max;
		min = a[i] < min ? a[i] : min;
	}
	
	cout << "Max : " << max << " Min: " << min;
}
