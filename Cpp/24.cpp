#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[10] = {45,26,13,89,7,36,98,23,56,72};
	
	cout << "Sorting with Insertion Sort:\n";
	
	int key;
	
	for(int i=1; i< 10;++i){
		key=a[i];
		int j = i-1;
		
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1] = key;
	}
	
	for(int i=0;i<10;++i) cout << a[i] << " ";
	
	return 0;
}
