#include<iostream>

int main()
{	
	using namespace std;
	char ch;
	cout<<"Please enter one of these"<<"\n"
		<<"c)carnivore		p)pianist"<<"\n"
		<<"t)tree     		g)game"<<endl;
	cin>>ch;
	while(ch!='c'&&ch!='p'&&ch!='t'&&ch!='g'){
		cout<<"Follow my orders!"<<endl;
		cout<<"Enter a c,p,t,or g: ";
		cin>>ch;	
	}
	switch(ch)
	{
		case 'c':break;
		case 'p':break;
		case 't': cout<<"A maple is a tree";
		case 'g':break;	
	}
	return 0;
} 
