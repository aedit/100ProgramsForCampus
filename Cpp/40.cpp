#include <bits/stdc++.h>
using namespace std;

int check_digit(int n){
	int digit = 0;
	
	while(n){
		digit++;
		n /= 10; 
	}
	
	return digit;
}

int power(int n, int digit){
	if(digit == 1) return n;
	else {
		digit--;
		return n * power(n, digit);
	}
}

int find_arm_sum(int n, int digit){
	int sum = 0;
	
	while(n){
		sum+= power(n%10, digit);
		n/=10;
	}
	
	return sum;
}

int main(){
	int n, digit;
	printf("Enter number:  \n");
	scanf("%d", &n);
	
	digit = check_digit(n);
	
	int sum = find_arm_sum(n , digit);
	
	
	if(sum == n) printf("Armstrong Number");
	else printf("Not an armstrong Number");
	return 0;
}
