#include<iostream>
int main()
{
	using namespace std;
	char ch;
	
	cout<<"Type,and I shall repeat.\n";
	cin.get(ch);
	while(ch!='.')
	{
		if(ch=='\n')
			cout<<ch;
		else
			cout<<ch+1; //原例中是++ch;ch+1会变成数字 
		cin.get(ch);
	}
	return 0;
 } 
