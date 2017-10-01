#include"Cd.h"
#include<cstdlib>
#include<string.h>
using std::cout;
using std::endl;

Cd::Cd(char* s1, char* s2, int n, double x)
{
	performers=new char[strlen(s1)+1];
	label = new char[strlen(s2) + 1];
	strcpy(performers,s1);
	strcpy(label,s2);
	selections=n;
	playtime=x;
}

Cd::Cd(const Cd& d)
{
	performers=new char[strlen(d.performers)+1];
	label = new char[strlen(d.label) + 1];
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections=d.selections;
	playtime=d.playtime;
}

Cd::Cd()
{
	performers = new char[1];		//只有一个0也要new 
	label = new char[1];
	performers[0] = '\0';      //注意是performers[0]
	label[0] = '\0';
	selections = 0;
	playtime = 0.;
}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
 } 

void Cd::Report()const
{
	cout<<"performers: "<<performers<<endl;
	cout<<"label: "<<label<<endl;
	cout<<"selections: "<<selections<<endl;
	cout<<"playtime: "<<playtime<<endl;
 } 

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)								//注意先判定是否等于自身 
	return *this;
	delete[] performers;						//赋值符重载要先删旧空间分配新空间 
	delete[] label;
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy(performers, d.performers);				
	strcpy(label, d.label);
	selections=d.selections;
	playtime=d.playtime;
	return *this;						//别忘了返回*this	
}

//classic method
Classic::Classic(char* s3, char* s1, char* s2, int n, double x)
				:Cd(s1,s2,n,x)
{
	mainwork = new char[strlen(s3) + 1];
	strncpy(mainwork,s3,100);
}

Classic::Classic(const Cd& d, char* s3):Cd(d)
{
	mainwork = new char[strlen(s3) + 1];
	strncpy(mainwork,s3,100);
}

Classic::Classic():Cd()
{
	mainwork = new char[1];
	mainwork[0] = '\0'; 
}

Classic::~Classic()
{
	delete[] mainwork;
}

void Classic::Report()const
{
	Cd::Report() ;					//调用基类
	cout<<"mainwork: "<<mainwork<<endl;
}

Classic& Classic::operator=(const Classic& c)
{
	if (this == &c)
	return *this;
	delete[] mainwork;
	mainwork = new char[strlen(c.mainwork) + 1];
	Cd::operator=(c);
	strcpy(mainwork, c.mainwork);
	return *this;
}

