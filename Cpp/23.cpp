#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[10] = {45,26,13,89,7,36,98,23,56,72};
	
	cout << "Sorting with Selection Sort:\n";
	
	for(int i=0;i<10;++i) {
		int index=i;
		for(int j=i+1;j<10;++j){
			if(a[j] < a[index]){
				
				index=j;
			}
		}
		int temp = a[i];
		a[i] = a[index];
		a[index]=temp;
	}
	
	for(int i=0;i<10;++i) cout << a[i] << " ";
	
	return 0;
}
