#include<iostream>
#include<string> 
#include<cstring> 

int main()
{
	using namespace std;
	cout<<"What is your first name?";
	char firstName[80];
	cin.getline(firstName,80);
	cout<<"What is your last name?"; 
	string lastName;
	getline(cin,lastName);
	cout<<"What letter grade do you deserve?";
	char grade;
	cin>>grade;
	cout<<"What is your age?"; 
	int age;
	cin>>age;
	
	cout<<"Name : "<<lastName<<" , "<<firstName<<endl;
	cout<<"Grade : "<<char(grade+1)<<endl;
	cout<<"Age : "<<age;
	
	return 0;	 
 } 
