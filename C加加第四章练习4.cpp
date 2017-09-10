#include<iostream>
#include<string> 
#include<cstring> 

int main()
{	using namespace std;
	string fName;
	string lName;
	string fullName;
	
	cout<<"Enter your first name: ";
	getline(cin,fName);
	cout<< "Enter your last name: ";
	getline(cin,lName);
	fullName=fName+", "+lName;
	cout<<"Here is the information in a single string: "
	<<fullName<<endl;
	return 0;
	
}
