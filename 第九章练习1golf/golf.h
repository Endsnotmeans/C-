#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
	static const int Len=40;
	char fullname[Len];
	int handicap;
 	public:
 		Golf();
 		Golf(const char* name,int hc));
 		~Golf(){};
	 	void setgolf(const char* name,int hc);
	 	void handicap(int hc);
	 	void showgolf() const;
 } ;
 
 #endif
