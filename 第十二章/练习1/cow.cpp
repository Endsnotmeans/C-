#include"Cow.h"
Cow::Cow()
{
	name[0] = '\0';
	hobby = NULL;
	weight = 0;
}
Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy(name, nm);
	this->hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	this->weight = c.weight;
}

Cow::~Cow()
{
	std::cout << "The object is destructed.\n";
	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)       //Cow::�Ǽ���operatorǰ��ġ��� 
{
	strcpy(this->name,c.name);
	this->hobby=new char[strlen(c.hobby)+1];
	strcpy(this->hobby, c.hobby);
	this->weight = c.weight;
	return *this;						//������return *this 
}

void Cow::showCow()const
{
	std::cout << "name: " << this->name << "\n";
	std::cout << "hobby: " << this->hobby << "\n";
	std::cout << "weight: " << this->weight << "\n";
}

