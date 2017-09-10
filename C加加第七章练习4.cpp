#include<iostream>
//Ëã²ÊÆ±µÄ¸ÅÂÊ 
long double probability(unsigned numbers,unsigned picks);	

int main()
{
	using namespace std;
	double total,choices;
	double stotal,schoices;
	cout<<"Enter the total num of choices and the num of picks allowed " 
		"and the special total and choices: ";
	while((cin>>total>>choices>>stotal>>schoices)&&
		choices<=total&&schoices<=stotal	)
	{
		cout<<"You have one chance in ";
		cout<<probability(total,choices)*probability(stotal,schoices);
		cout<<" of winning.\n";
	}
	
	cout<<"bye\n";
	return 0;
 } 
 long double probability(unsigned numbers,unsigned picks)
 {
 	long double result=1.0;
 	long double n;
 	unsigned p;
 	
 	for(n=numbers,p=picks;p>0;n--,p--)
 		result=result*n/p;		//(51/4)*(50/3)*(49/2)*(48/1)
 	return result;
  } 
  
