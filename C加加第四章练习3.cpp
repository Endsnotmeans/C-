#include<iostream>
#include<string> 
#include<cstring> 

int main()
{	using namespace std;
	char fName[20];
	char lName[20];
	char fullName[41];
	
	cout<<"Enter your first name: ";
	cin.getline(fName,20);
	cout<< "Enter your last name: ";
	cin.getline(lName,20);
	strncpy(fullName,lName,20);
	strcat(fullName,", ");
	strncat(fullName,fName,20);
	cout<<"Here is the information in a single string: "
	<<fullName<<endl;
	return 0;
	
}
