#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	FILE *f = fopen("94.cpp", "r");
	while(!feof(f)){
		cout << (char)fgetc(f);
	}
	fclose(f);
	return 0;
}
