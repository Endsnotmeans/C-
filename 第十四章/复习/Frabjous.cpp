#include"Frabjous.h"
#include<cstdlib>


Gloam::Gloam(int g, const char* s)
{
	frab =Frabjous(s);			//调用F类不用 Frabjous::Frabjous 
	this->glip = g;
}
Gloam::Gloam(int g, const Frabjous& fb)
{
	frab=Frabjous(fb);
	this->glip = g;
}
void Gloam::tell()
{
	std::cout << glip << std::endl;
	this->frab.tell();
}
 
