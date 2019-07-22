#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[10] = {45,26,13,89,7,36,98,23,56,72};
	int max, smax;
	if(a[0]>a[1]){
		smax = a[1];
		max = a[0];
	}
	else {
		smax = a[0];
		max = a[1];
	}
	
	for(int i=0; i<10;++i){
		if(a[i] >smax && a[i] < max){
			smax = a[i];
		}
		else if(a[i] > max){
			smax = max;
			max =a[i];
		}
	}
	
	for(int i=0;i<10;++i) cout << a[i] << " ";
	
	cout << "\nSecond max: "<< smax;
	
	return 0;
}
