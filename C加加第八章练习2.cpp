#include<iostream>
using namespace std;
struct CandyBar
{
	char* name;				//char这里不透彻，到底是char name【】还是char * 
	float weight;
	int calory;
}; 
void set(CandyBar& candy,char* name="Milennium Munch",
		double weight=2.85,int calory=350);
void show(const CandyBar &candy);

int main()
{
	CandyBar cd;
	set(cd);
	show(cd);
	return 0;
}

void set(CandyBar& candy,char* name,double weight,int calory)
{
//	char name[30];
//	double weight;
//	int calory;
	candy.name=name;
	candy.weight=weight;
	candy.calory=calory;
}

void show(const CandyBar &candy)
{
	cout<<"Brand name: "<<candy.name <<endl;
	cout<<"candybar weight: "<<candy.weight <<endl;
	cout<<"candybar calory: "<<candy.calory <<endl;
}
