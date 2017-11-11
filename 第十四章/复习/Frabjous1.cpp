#include"Frabjous1.h"
#include<cstdlib>


Gloam::Gloam(int g, const char* s):Frabjous::Frabjous(s)
{
	//frab =Frabjous(s);	no need 
	this->glip = g;
}
Gloam::Gloam(int g, const Frabjous& fb):Frabjous::Frabjous(fb)
{
	//frab=Frabjous(fb);   no need
	this->glip = g;
}
void Gloam::tell()
{
	std::cout << glip << std::endl;
	Frabjous::tell();
}
 
