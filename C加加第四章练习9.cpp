#include<iostream>
struct CandyBar {
	char Brand[20];
	double Weight;
	int Calory;
}; 

int main(){
	using namespace std;
	CandyBar *snack=new CandyBar;
	cout<<"Enter name of brand: ";
	cin.get(snack->Brand ,20);      
	cout<<"Enter weight: ";
	cin>>(*snack).Weight;	
	cout<<"Enter Calory: ";
	cin>>snack->Calory ;


	cout<<"Brand: "<<snack->Brand
	<<"\nWeight: "<<snack->Weight
	<<"\nCalory: "<<snack->Calory<<endl;
	delete [] snack;
	return 0;
}

