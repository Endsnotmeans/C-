#ifndef PERSON_H_
#define PERSON_H_
#include<cstring>

class Person
{
private:
    static const int LIMIT=25;  //dev c++里这要加int？！ 
	std::string lname;
	char fname[LIMIT];
public:
	Person() { lname = "";fname[0] = '\0'; }
	Person(const std::string ln, const char* fn = "Heyyou");
	~Person() {};
	void show()const;
	void FormalShow()const;
	Person operator+(const Person& p);	//这个好像没学 
};
#endif 
