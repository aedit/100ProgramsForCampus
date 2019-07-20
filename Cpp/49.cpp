#include <iostream>
using namespace std;

struct Library{
		int access_number, year, price;
		string author_name, title, publisher;
	};

int main(){	
	int n;
	Library s[100];
	printf("Enter no. of books: \n");
	scanf("%d",&n);
	
	for(int i=0; i<n; ++i){
		printf("Book %d:\n", i+1);
		printf("Enter Access Number: ");
		cin >> s[i].access_number;
		printf("Enter Author Name: ");
		cin >> s[i].author_name;
		
		printf("Enter Title: ");
		cin >> s[i].title;
		
		printf("Enter Publisher: ");
		cin >> s[i].title;
		
		printf("Enter year: ");
		cin >> s[i].year;
		
		printf("Enter price: ");
		cin >> s[i].price;
		
	}
	
	for(int i=0; i<n; ++i){
		cout << "Book Details: \n"<< s[i].access_number << " - " << s[i].title <<  " - "<< s[i].author_name << " - "<< s[i].publisher << " - " << s[i].year << " - "<< s[i].price << endl;
	}
	
	return 0;
}
