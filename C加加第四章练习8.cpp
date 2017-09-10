#include<iostream>

struct Pizza {
	char Name[20]; 
	int diameter;
	double Weight;
}; 

int main()
{
	using namespace std;
	Pizza *ww=new Pizza ;
	cout<<"Enter Pizza diameter: ";
	cin>>ww->diameter;
	cout<<"Enter company name: ";
	cin.get();
	cin.getline(ww->Name ,20);
	cout<<"Enter Pizza weight: ";
	cin>>ww->Weight;
	
	cout<<"Name: "<<ww->Name
	<<"\nDiameter "<<ww->diameter 
	<<"\nWeight: "<<ww->Weight<<endl;
	delete ww; 
	return 0;
}
 
