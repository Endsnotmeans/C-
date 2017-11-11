#ifndef FRABJOUS_H_
#define FRABJOUS_H_
#include<iostream>
#include<cctype>
#include<cstring>

class Frabjous
{
private:
	char frab[20];
public:
	Frabjous(const char* s = "C++") { strcpy(frab, s); }
	Frabjous(const Frabjous& fb) { strcpy(this->frab, fb.frab); }
	virtual void tell() { std::cout << frab << std::endl; }
};

class Gloam				//°üº¬ÁËFÀà 
{
private:
	int glip;
	Frabjous frab;
public:
	Gloam(int g = 0, const char* s = "C++");
	Gloam(int g, const Frabjous& fb);
	void tell();
};
#endif 
