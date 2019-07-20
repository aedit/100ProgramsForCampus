#include <iostream>
using namespace std;

struct Student{
		int sno;
		string sname;
		int marks;
	};

int main(){	
	int n;
	Student s[100];
	printf("Enter no. of students: \n");
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		printf("Student %d:\n", i+1);
		printf("Enter sno: ");
		cin >> s[i].sno;
		printf("Enter Name: ");
		cin >> s[i].sname;
		
		printf("Enter marks: ");
		cin >> s[i].marks;
	}
	
	for(int i=0; i<n; ++i){
		printf("Student %d:\n", i);
		printf("Sno: %d\n", s[i].sno);
		
		cout << "Name: "<< s[i].sname << endl;
		
		printf("Marks: %d\n", s[i].marks);
	}
	
	return 0;
}
