#include <iostream>
#include "golf.h"
#include <cstring>
using namespace std;

Golf::Golf()
{
	fullname[0]='\0';
	handicap=0;
}
Golf::Golf(const char* name,int hc)
{
	strcpy(fullname, name);
	handicap = hc;
}

void Golf::setgolf(const char* name,int hc)


 
void Golf::handicap(int hc)
{
	g.handicap =hc;
}
 void Golf::showgolf()const
 {
 	cout<<"golfname: "<<g.fullname <<endl;
 	cout<<"golfhandicap: "<<g.handicap <<endl;
 }
 
 
