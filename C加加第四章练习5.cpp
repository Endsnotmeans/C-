#include<iostream>

struct CandyBar {
	char Brand[20];
	double Weight;
	int Calory;
}; 

using namespace std;
int main(){
	CandyBar snack={"Mocha Munch",2.3,350};
	cout<<"Brand: "<<snack.Brand
	<<"\nWeight: "<<snack.Weight
	<<"\nCalory: "<<snack.Calory<<endl;
	
	return 0;
}


