#include<iostream>
#include<cstring>
using namespace std;
struct car{
	string manufct;
	int prdyear;
	};

int main(){
	int carnum;
	cout<<"How many cars do you wish to catalog?";
	cin>>carnum;
	while(cin.get() != '\n');    // get rid of rest of line
	car *ret=new car[carnum];
	for(int i=1;i<carnum+1;i++)
	{
		cout<<"Car #"<<i<<endl;
		cout<<"Please enter the make: ";
		getline(cin,ret[i].manufct);
		cout<<"Please enter the year made: ";
		cin>>ret[i].prdyear;
		while(cin.get() != '\n');    // get rid of rest of line
	}
	cout<<"Here is your collection:\n";
	for(int j=0;j<carnum;j++)
	cout<<ret[j].prdyear <<"\t"<<ret[j].manufct<<endl;
	delete [] ret;
	return 0;
}
