#include<iostream>

struct inflatable
{
	char name[20];	//string��Ҳ�ǿ��Եģ���std::string name�� 
	float volume;
	double price;	
 } ;
 //һ��struct���Ը�ֵ������һ��ͬ����struct����ʹ����������� 
 int main()
 {
 	using namespace std;
 	inflatable quest=
 	{
 		"Glorious Gloria",  //ע�ⶺ�š�Ҳ���Է�ͬһ�� 
 		1.88,
 		29.99
	 };						//ע��ֺ� 
	inflatable pal=
	 {
	 	"Audacious Arthur",
	 	3.12,
	 	32.99
	 };
	 
	cout<<"Expand your quest list with "<<quest.name;
	cout<<" and "<<pal.name<<"!\n";
	cout<<"You can have both for $";
	cout<<quest.price+pal.price<<"!\n";
	return 0; 
 }
