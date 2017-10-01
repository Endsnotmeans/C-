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
	performers = new char[1];		//ֻ��һ��0ҲҪnew 
	label = new char[1];
	performers[0] = '\0';      //ע����performers[0]
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
	if (this == &d)								//ע�����ж��Ƿ�������� 
	return *this;
	delete[] performers;						//��ֵ������Ҫ��ɾ�ɿռ�����¿ռ� 
	delete[] label;
	performers = new char[strlen(d.performers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy(performers, d.performers);				
	strcpy(label, d.label);
	selections=d.selections;
	playtime=d.playtime;
	return *this;						//�����˷���*this	
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
	Cd::Report() ;					//���û���
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

