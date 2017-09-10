#include<iostream>
#include"plorg.h"
#include<cstring>

Plorg::Plorg()
{
	strcpy(name,"dftPlorg");
	Ci=50;
}
Plorg::Plorg(const char name_m[],int Ci_m)
{
	strcpy(name,name_m);
	Ci=Ci_m;
}

void Plorg::PlorgReset(int n)
{
	Ci=n;
}

void Plorg::PlorgShow()const
{
	std::cout<<"Plorg's fullname: "<<name<<"\n";
	std::cout<<	"Plorg's Ci: "<<Ci<<"\n";
}

