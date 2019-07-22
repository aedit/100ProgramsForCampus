#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[10] = {45,26,13,89,7,36,98,23,56,72};
	
	cout << "Sorting with bubble sort:\n";
	
	for(int i=0;i<10;++i) for(int j=0; j< 10-i-1;j++) {
		if(a[j]>a[j+1]){
			int temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
		}
	}
	
	for(int i=0;i<10;++i) cout << a[i] << " ";
	
	return 0;
}
