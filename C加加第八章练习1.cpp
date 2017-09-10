#include<iostream>
void fun(char *ch,int x=0);
using namespace std;
int main()
{	char *str;
	str="I love Sophie.\n"; 
	fun(str);
	cout<<"1\n";
	fun(str,1);
	cout<<"2\n";
	fun(str,-1);
	return 0;	
}
void fun(char *ch,int x)
{
	static int times=0;			//static，不然离开函数times不加了 
	if(x)
		times++;
	for(int i=0;i<times+1;i++){
		cout<<ch<<endl;
	}
}
