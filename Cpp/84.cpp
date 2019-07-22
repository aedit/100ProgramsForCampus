#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[10] = {45,26,13,89,7,36,98,23,56,72};
	int min, smin;
	if(a[0]>a[1]){
		min = a[1];
		smin = a[0];
	}
	else {
		min = a[0];
		smin = a[1];
	}
	
	for(int i=0; i<10;++i){
		if(a[i] <smin && a[i] > min){
			smin = a[i];
		}
		else if(a[i] < min){
			smin = min;
			min =a[i];
		}
	}
	
	for(int i=0;i<10;++i) cout << a[i] << " ";
	
	cout << "\nSecond min: "<< smin;
	
	return 0;
}
