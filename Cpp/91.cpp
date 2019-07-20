#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
	int a, b, c;
	cout << "Enter a, b, c for ax2+bx+c=0\n";
	cin >> a >> b >> c;
	
	int d = b*b - 4*a*c;
	
	if(d==0){
		cout << "Roots: " << -b / (double)(2*a) << " and "<< -b / (double)(2*a);
	}
	else if(d>0){
		d = sqrt(d);
		cout << "Root 1: " << (-b +d)/ (double)(2*a) << " and "<< (-b -d) / (double)(2*a);
	}
	else {
		d = sqrt(-d);
		cout << "Root 1: " << -b/ (double)(2*a) <<"+"<< d/ (double)(2*a) << "i and "<< (-b) / (double)(2*a) << -d/ (double)(2*a) << "i";
	}
	
}
