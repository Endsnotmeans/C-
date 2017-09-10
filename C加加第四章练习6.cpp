#include<iostream>

struct CandyBar {
	char Brand[20];
	double Weight;
	int Calory;
}; 

using namespace std;
int main(){
	CandyBar snack[3]={
	{"Mocha Munch",2.3,350},
	{"XX",3.3,450},
	{"YY",4.3,550}
	};
	cout<<"Brand: "<<snack[0].Brand
	<<"\nWeight: "<<snack[0].Weight
	<<"\nCalory: "<<snack[1].Calory<<endl;
	
	return 0;
}

