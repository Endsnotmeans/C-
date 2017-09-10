#include<iostream>
#include<cstring>
using namespace std;
int main()
{	char ch[50];
	int cnt=0;
	cout<<"Enter words(to stop,type word done): \n";
	
	while(cin>>ch&&strcmp("done",ch))
	{
		++cnt;
	}
	cout<<"U entered a total of "<<cnt<<" words"<<endl;
	return 0;
}
