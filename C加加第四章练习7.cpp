#include<iostream>

struct Pizza {
	char Name[20]; //20应该用个const常量 
	int diameter;
	double Weight;
}; 

int main()
{
	using namespace std;
	Pizza ww;
	cout<<"Enter company name: ";
	cin.getline(ww.Name ,20);
	cout<<"Enter Pizza diameter: ";
	cin>>ww.diameter;
	cout<<"Enter Pizza weight: ";
	cin>>ww.Weight;
	
	cout<<"Name: "<<ww.Name
	<<"\nDiameter "<<ww.diameter 
	<<"\nWeight: "<<ww.Weight<<endl;
	
	return 0;
}

