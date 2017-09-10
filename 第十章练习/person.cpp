#include<iostream>
#include<cstring>
#include"Person.h"
using namespace std;
Person::Person(const std::string ln, const char* fn )
{
	lname=ln;
	strcpy(fname,fn) ;
}

void Person::show()const
{
	cout << fname << ". " << lname << endl;	
}

void Person::FormalShow()const
{
	cout << lname << ". " << fname << endl;
}
Person Person::operator+(const Person& p)
{
	Person per;
	per.lname = lname + p.lname;
	strcat(per.fname, strcat(fname, p.fname));
	return per;
}
