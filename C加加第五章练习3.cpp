#include<iostream>

int main(){
	using namespace std;
	const int INVEST=100;
	int Daphne;
	double Cleo=100.00;
	int i=1;
	do{
		Cleo*=1.05;
		Daphne=100+10*i;
		i++;
	}while(Cleo<Daphne);
	cout<<"After "<<i<<" years,Cleo's investment becomes more than Daphne's\n";
	cout<<"Cleo's is "<<Cleo<<endl;
	cout<<"Daphne's is "<<Daphne<<endl;
		
	return 0;
}
