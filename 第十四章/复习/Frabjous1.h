#ifndef FRABJOUS1_H_
#define FRABJOUS1_H_
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

class Gloam:private Frabjous	//继承了F类 ，是单冒号。。 
{
private:
	int glip;
	//Frabjous frab;		自动包含该项，不用写了 
public:
	Gloam(int g = 0, const char* s = "C++");
	Gloam(int g, const Frabjous& fb);
	void tell();
};
#endif 
