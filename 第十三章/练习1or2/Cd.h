#ifndef CD_H_
#define CD_H_
#include<iostream>
#include<cctype>

class Cd
{
private:
	char *performers;
	char *label;
	int selections;
	double playtime;
public:
	Cd(char* s1, char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();					//第一题不用动态分配，destructor就不用写 
	virtual void Report()const;
	virtual Cd& operator=(const Cd& d);
};
// =====================================
class Classic : public Cd
{
private:
	char *mainwork;
public:
	Classic(char* s3, char* s1, char* s2, int n, double x);
	Classic(const Cd& d, char* s3);
	Classic();
	virtual ~Classic();
	virtual void Report()const;
	virtual Classic& operator=(const Classic& c);
};
#endif 
