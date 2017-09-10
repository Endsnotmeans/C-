#include<iostream>
#include<cstring>
using namespace std;
char *getname(void); 
int main()
{
	char* name;
	//释放存储空间再重新分配，地址不见得一样 
	name=getname();
	cout<<name<<" at "<<(int*)name<<"\n";
	delete [] name;
	
	name=getname();
	cout<<name<<" at "<<(int*)name<<"\n";
	delete [] name;
	return 0;
}

char *getname()			//省存储空间的函数 
{
	char temp[80];
	cout<<"Enter last name: ";
	cin>>temp;
	char* pn=new char[strlen(temp)+1];
	strcpy(pn,temp);
	return pn;
}
