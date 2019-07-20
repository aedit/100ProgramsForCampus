#include <iostream>
using namespace std;

struct complex{
		int real;
		int imag;
		
	};

void addition(complex a, complex b){
	complex c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	
	if(c.imag > 0) printf ("\nAddition: %d+%di", c.real, c.imag);
	else if(c.imag < 0) printf ("\nAddition: %d-%di", c.real, c.imag);
	else printf ("\nAddition: %d", c.real);
}

void subtraction(complex a, complex b){
	complex c;
	c.real = a.real - b.real;
	c.imag = a.imag - b.imag;
	
	if(c.imag > 0) printf ("\nSubtraction: %d+%di", c.real, c.imag);
	else if(c.imag < 0) printf ("\nSubtraction: %d-%di", c.real, c.imag);
	else printf ("\nSubraction: %d", c.real);
}

void multiplication(complex a, complex b){
	complex c;
	c.real = (a.real * b.real) - (a.imag * b.imag);
	c.imag = (a.real * b.imag) + (b.real * a.imag);
	
	if(c.imag > 0) printf ("\nMultipilication: %d+%di", c.real, c.imag);
	else if(c.imag < 0) printf ("\nMultiplication: %d-%di", c.real, c.imag);
	else printf ("\nMultiplication: %d", c.real);
}

int main(){
	complex a, b;
	
	printf("Enter complex number 1: (a bi)\n");
	scanf("%d %di",&a.real, &a.imag );
	
	printf("Enter complex number 1: (a bi)\n");
	scanf("%d %di",&b.real, &b.imag );
	
	addition(a,b);
	subtraction(a,b);
	multiplication(a,b);
	
	return 0;
}
